#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *insert(Node *root, int d)
{
    if (root == nullptr)
    {
        root = new Node(d);
        return root;
    }
    if (root->data < d)
    {
        root->right = insert(root->right, d);
    }
    else
    {
        root->left = insert(root->left, d);
    }
    return root;
}

void takeinput(Node *&root)
{
    cout << "enter a node to enter into bst:- ";
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insert(root, data);
        cout << "enter a node to enter into bst:- ";
        cin >> data;
    }
}

// level order traversal
Node *levelordertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // use seperator for level; oprder traversal
    while (!q.empty())
    {
        Node *temp = q.front();
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

bool searchinbst(Node *root, int ele)
{
    // if (root == nullptr)
    // {
    //     return false;
    // }
    // if (root->data == ele)
    // {
    //     return true;
    // }
    // else if (root->data < ele)
    // {
    //     return searchinbst(root->right, ele);
    // }
    // else
    // {
    //     return searchinbst(root->left, ele);
    // }

    Node *temp = root;
    while (temp != nullptr)
    {
        /* code */
        if (temp->data == ele)
        {
            return true;
        }
        if (temp->data < ele)
        {
            temp = temp->right;
        }
        else
        {
            temp = temp->left;
        }
    }
    return false;
}

Node *minvalue(Node *root)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    Node *temp = root;
    while (temp->left != nullptr)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxvalue(Node *root)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    Node *temp = root;
    while (temp->right != nullptr)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deletebst(Node *root, int ele)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    if (root->data == ele)
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        else if (root->left != nullptr && root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->right != nullptr && root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else
        {
            int min = minvalue(root->right)->data;
            root->data = min;
            root->right = deletebst(root->right, min);
            return root;
        }
    }
    else if (root->data > ele)
    {
        root->left = deletebst(root->left, ele);
    }
    else
    {
        root->right = deletebst(root->right, ele);
    }
}

// -------------------------------------------------KTH SMALLEST ELEMENT IN BST---------------------------------------------
int kthsmallest(Node *root, int &i, int k)
{
    if (root == nullptr)
    {
        return -1;
    }
    int left = kthsmallest(root->left, i, k);
    if (left != -1)
    {
        return left;
    }
    i++;
    if (i == k)
    {
        return root->data;
    }
    return kthsmallest(root->right, i, k);
}

// ----------------------------------------------------FIND PREDECESSOR AND SUCCESSOR IN BST-------------------------------------------
// first find node with value key in the tree then find pre and succ of that node by apply left adn right right and right ->then left left etc max or min
pair<int, int> findpre_succ(Node *root, int key)
{
    Node *temp = root;
    int pre = -1, succ = -1;
    while (temp->data != key)
    {
        if (temp->data > key)
        {
            succ = temp->data;
            temp = temp->left;
        }
        if (temp->data < key)
        {
            pre = temp->data;
            temp = temp->right;
        }
    }

    // for predecessor
    Node *templeft = temp->left;
    while (templeft != nullptr)
    {
        pre = templeft->data;
        templeft = templeft->right;
    }

    // for successor
    Node *tempright = temp->right;
    while (tempright != nullptr)
    {
        succ = tempright->data;
        tempright = tempright->left;
    }
    pair<int, int> ans = make_pair(pre, succ);
    // cout << pre << succ;
    return ans;
}

//----------------------------------LCA IN BST---------------------------------
Node *find_lca_bst(Node *root, int n1, int n2)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    // if (root->data < n1 && root->data > n2 || root->data > n1 && root->data < n2)
    // {
    //     return root;
    // }
    if (root->data < n1 && root->data < n2)
    {
        return find_lca_bst(root->right, n1, n2);
    }
    if (root->data > n1 && root->data > n2)
    {
        return find_lca_bst(root->left, n1, n2);
    }
    return root;
}

//----------------------------------------TWO SUM IN BST-----------------------
void inorder(Node *root, vector<int> &vec)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left, vec);
    vec.push_back(root->data);
    inorder(root->right, vec);
}

bool Twosum_bst(Node *root, int target)
{
    vector<int> in;
    inorder(root, in);
    int i = 0;
    int j = in.size() - 1;
    while (i < j)
    {
        int sum = in[i] + in[j];
        if (sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}

//--------------------------------------------FLATTEN BST TO SORTED LIST----------------------------------------
Node *flattenbst(Node *root)
{
    vector<int> in;
    inorder(root, in);

    int n = in.size();
    Node *newnode = new Node(in[0]);
    Node *curr = newnode;
    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node(in[i]);
        curr->left = nullptr;
        curr->right = temp;
        curr = temp;
    }
    return newnode;
}

//------------------------------------  -INORDER TO BST-----------------------------------------
Node *Inordertobst(int s, int e, vector<int> &in)
{
    if (s > e)
    {
        return nullptr;
    }
    int mid = (s + e) / 2;
    Node *root = new Node(in[mid]);
    root->left = Inordertobst(s, mid - 1, in);
    root->right = Inordertobst(mid + 1, e, in);
    return root;
}
Node *balancedbst(Node *root)
{
    vector<int> in;
    inorder(root, in);
    return Inordertobst(0, in.size() - 1, in);
}

//---------------------------------PREORDER TO BST-----------------------------------
Node *solvepre_bst(vector<int> &pre, int mini, int maxi, int &i)
{
    if (i > pre.size())
    {
        return nullptr;
    }
    if (pre[i] < mini || pre[i] > maxi)
    {
        return nullptr;
    }
    Node *root = new Node(pre[i++]);
    root->left = solvepre_bst(pre, mini, root->data, i);
    root->right = solvepre_bst(pre, root->data, maxi, i);
    return root;
}
Node *preorderbst(vector<int> &pre)
{
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    return solvepre_bst(pre, mini, maxi, i);
}

// int main()
// {
//     Node *root = nullptr;
//     takeinput(root);
//     levelordertraversal(root);
//     // bool ans = searchinbst(root, 6);
//     // cout << ans << endl;

//     cout << "minvalue:- " << minvalue(root)->data << endl;
//     cout << "minvalue:- " << maxvalue(root)->data << endl;

//     // int delitem;
//     // cout << "enter node which you wants to delete:- ";
//     // cin >> delitem;
//     // deletebst(root, delitem);
//     // levelordertraversal(root);

//     // //--------------kth smallest --------------
//     // int k;
//     // cout << "enter k to find kth smallest value:- ";
//     // cin >> k;
//     // int i = 0;
//     // cout << k << "th smallest value:- " << kthsmallest(root, i, k) << endl;

//     // //--------------find predecessor and successor---------------
//     // int ps;
//     // cout << "enter a node to find predecessor and succesor of that node:- ";
//     // cin >> ps;
//     // pair<int, int> presuc = findpre_succ(root, ps);
//     // cout << "predecessor of a node is :- " << presuc.first << endl
//     //      << " successor of node is:- " << presuc.second << endl;

//     //----------------------LCA IN BST---------------
//     cout << "LCA in BST:- " << find_lca_bst(root, 1, 3)->data << endl;

//     //----------------------CGECK FOR TARGET VALUE:- SUM OF ANY TWO NODES = TARGET-----------------
//     cout << "Two sum in a bst:- " << Twosum_bst(root, 13) << endl;

//     //---------------------------FLATTEN BST TO A SORTED LIST------------------------------
//     // Node *flatten = flattenbst(root);
//     // levelordertraversal(flatten);

//     //-------------------------BALANCED BST AND INORDER TO BST-------------------------
//     // Node *inbst = balancedbst(root);
//     // levelordertraversal(inbst);

//     return 0;
// }