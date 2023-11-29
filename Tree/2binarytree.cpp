#include <iostream>
using namespace std;
#include <queue>
#include <bits/stdc++.h>

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *createtree(node *root)
{
    cout << "enter the data " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return nullptr;
    }

    cout << "enter data for left child of root: " << data << endl;
    root->left = createtree(root->left);
    cout << "enter data for right child of root: " << data << endl;
    root->right = createtree(root->right);
}

// level order traversal
node *levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // use sepearator for level; oprder traversal

    while (!q.empty())
    {
        node *temp = q.front();
        // cout << temp->data << " ";
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

//----------------------------------sum of the nodex on the longest path from root node to leaf node------------------------------
void solve(node *root, int len, int &maxlen, int sum, int &maxsum)
{
    if (root == nullptr)
    {
        if (len > maxlen)
        {
            maxlen = len;
            maxsum = sum;
        }
        else if (len == maxlen)
        {
            maxsum = max(sum, maxsum);
        }
        return;
    }
    sum = sum + root->data;
    solve(root->left, len + 1, maxlen, sum, maxsum);
    solve(root->right, len + 1, maxlen, sum, maxsum);
}
int sumoflongpath(node *root)
{
    int len = 0;
    int maxlen = 0;
    int sum = 0;
    int maxsum = 0;

    solve(root, len, maxlen, sum, maxsum);
    return maxsum;
}

//----------------------------Longest common Ancestors---------------------------
int lca(node *root, int n1, int n2)
{
    if (root == nullptr)
    {
        return -1;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root->data;
    }

    int leftans = lca(root->left, n1, n2);
    int rightans = lca(root->right, n1, n2);
    cout << root->data << "-> ";
    cout << leftans << " " << rightans << endl;
    if (leftans != -1 && rightans != -1) // if left adn right of root node is not null i.r one side is n1 and othre side-> n2
    {
        return root->data;
    }
    else if (leftans != -1 && rightans == -1) // left of root node is not null that is it is equals to n1 or n2
    {
        return leftans;
    }
    else if (leftans == -1 && rightans != -1) // right of root node is not null that is it is equals to n1 or n2
    {
        return rightans;
    }
    else
    {
        return -1;
    }
}

//------------------------------------K SUM PATHS----------------------------------------
// check for all paths and chgeck sum from largest side node if sum == k then incre count
void sumpath(node *root, int k, int &count, vector<int> path)
{
    if (root == nullptr)
    {
        return;
    }
    path.push_back(root->data);
    sumpath(root->left, k, count, path);
    sumpath(root->right, k, count, path);

    int size = path.size();
    int sum = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        sum += path[i];
        if (sum == k)
            count++;
    }

    path.pop_back();
}

//----------------------------------------------KTH ANCESTORS-----------------------------------
int kancestor(node *root, int &k, int node)
{
    if (root == nullptr)
    {
        return -1;
    }
    if (root->data == node) // if root data is equals to given node of which we have to find ancestor
    {
        return root->data;
    }
    int leftans = kancestor(root->left, k, node);
    int rightans = kancestor(root->right, k, node);

    if (leftans != -1 && rightans == -1) // if left is equals to node
    {
        k--;        // decrement k
        if (k <= 0) // if k reaches to 0 that emans all level and kth ancestor has been found sp return root data otherwise left
        {
            k = INT16_MAX;
            return root->data;
        }
        return leftans;
    }
    if (leftans == -1 && rightans != -1) // if right is equals to node
    {
        k--;
        if (k <= 0)
        {
            k = INT16_MAX;
            return root->data;
        }
        return rightans;
    }
    return -1;
}

// ---------------------------Maximum sum of non adjacent nodes---------------------
// sum like if root node includes then cannot include left and right nmdeo, if left and right node includes then cannot includes root node
// first:- maxsum by including nodes at current level , second: maxsum by excluding nodes at curr levl
pair<int, int> sumonadjacent(node *root)
{
    if (root == nullptr)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> leftt = sumonadjacent(root->left);
    pair<int, int> rightt = sumonadjacent(root->right);
    pair<int, int> res;
    res.first = root->data + leftt.second + rightt.second;
    res.second = max(leftt.first, leftt.second) + max(rightt.first, rightt.second);

    return res;
}

//--------------------------------------tree using inorder and preorder------------------------------
// first node pf [re is root then find that node in inorder then /left side of that node will be left subtree and right subtree will be right side of that
// int findpos(int in[], int ele, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (in[i] == ele)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
void createmapping(int in[], map<int, int> &nodetoindex, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodetoindex[in[i]] = i;
    }
}
node *solvetree(int in[], int pre[], int &preind, int instart, int inend, int n, map<int, int> nodetoindex)
{
    if (preind >= n || instart > inend)
    {
        return nullptr;
    }
    int ele = pre[preind++];
    node *root = new node(ele); // create root node for ele
    // int pos = findpos(in, ele, n); // find pos of that node into inorder
    int pos = nodetoindex[ele];

    root->left = solvetree(in, pre, preind, instart, pos - 1, n, nodetoindex);
    root->right = solvetree(in, pre, preind, pos + 1, inend, n, nodetoindex);
    return root;
}
node *in_pre_tree(int in[], int pre[], int n)
{
    int preindex = 0;
    map<int, int> nodetoindex;
    createmapping(in, nodetoindex, n);
    node *ans = solvetree(in, pre, preindex, 0, n - 1, n, nodetoindex);
    return ans;
}

// --------------------------------------tree using inorder and postorder--------------------------------
// same as preorder but here root node will be last node of postorder
// void createmapping(int in[], map<int, int> &nodetoindex, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         nodetoindex[in[i]] = i;
//     }
// }
node *solve_tree(int in[], int post[], int &postind, int instart, int inend, int n, map<int, int> nodetoindex)
{
    if (postind < 0 || instart > inend)
    {
        return nullptr;
    }
    int ele = post[postind--];
    node *root = new node(ele); // create root node for ele
    // int pos = findpos(in, ele, n); // find pos of that node into inorder
    int pos = nodetoindex[ele];

    root->left = solve_tree(in, post, postind, instart, pos - 1, n, nodetoindex);
    root->right = solve_tree(in, post, postind, pos + 1, inend, n, nodetoindex);
    return root;
}
node *in_post_tree(int in[], int post[], int n)
{
    int preindex = n - 1;
    map<int, int> nodetoindex;
    createmapping(in, nodetoindex, n);
    node *ans = solve_tree(in, post, preindex, 0, n - 1, n, nodetoindex);
    return ans;
}

int main()
{
    node *root = NULL;
    root = createtree(root);
    // buildfromlevelorder(root);
    cout << "level order traversal:- " << endl;
    levelordertraversal(root);
    cout << endl;

    // cout << "maxsum:- " << sumoflongpath(root) << endl;

    cout << "Longest Common Ancestors:- ";
    int ans = lca(root, 6, 4);
    cout << ans << endl;

    // // ---------------------------k sum paths
    // vector<int> path;
    // int count = 0;
    // int k;
    // cout << "enter a number for k sum path:- ";
    // cin >> k;
    // sumpath(root, k, count, path);
    // cout << "k sum paths:- " << count << endl;

    // //------------------kth ancestor-----------
    // int kan;
    // cout << "enter kth value to find kth ancestor:- ";
    // cin >> kan;
    // cout << kancestor(root, kan, 4) << endl;

    // //---------------maximum sum of non-adjacent nodes-----------------
    // pair<int, int> anss = sumonadjacent(root);
    // cout << "max sum of non adjacent nodes " << max(anss.first, anss.second) << endl;

    //----------------------------construct tree using inorder and preorder------------------
    // int in[] = {4, 2, 6, 1, 8, 3, 9};
    // int pre[] = {1, 2, 4, 6, 3, 8, 9};
    // int post[] = {4, 6, 2, 8, 9, 3, 1};
    // node *traversal = in_pre_tree(in, pre, 7);
    // levelordertraversal(traversal);
    // node *inpost = in_post_tree(in, post, 7);
    // levelordertraversal(inpost);

    return 0;
}
