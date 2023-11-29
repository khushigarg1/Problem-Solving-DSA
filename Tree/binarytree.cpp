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

// -----------------------------level order traversal--------------------------------*/
node *levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // use sepearator for level order traversal

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

// --------------------------------------INORDER TRAVERSAL---------------------------------
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// --------------------------------------PREORDER TRAVERSAL---------------------------------
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// --------------------------------------POSTORDER TRAVERSAL---------------------------------
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// BUILD TREE FROM LEVEL ORDER TRAVERSAL WHENEVER WE TALK ABOUT LEVEL ORDER TRAVERSAL THEN WE JUST HAVE TO USE QUEUE
void buildfromlevelorder(node *&root)
{
    queue<node *> q;
    cout << "enter data for root node:- " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter data for left node:- " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "enter data for right node:- " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int heighttree(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int h1 = heighttree(root->left);
    int h2 = heighttree(root->right);

    return max(h1, h2) + 1;
}

// first-> diameter, second -> height :- longest path bw any no.of nodes
pair<int, int> diameterfast(node *root)
{
    if (root == nullptr)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diameterfast(root->left);
    pair<int, int> right = diameterfast(root->right);

    int op1 = left.first;                     // diameter of left tree
    int op2 = right.first;                    // diamter of right tree
    int op3 = left.second + right.second + 1; // height for left adn right both trees plus root node

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));             // diameter :- maximum from all option3
    ans.second = max(left.second, right.second) + 1; // maimum height of tree
    return ans;
}

//------------------BALANCED TREE OR NOT------------------
// first:- balanced or not yes or no , second-> height of tree
pair<bool, int> balancedfast(node *root)
{
    if (root == nullptr)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> left = balancedfast(root->left);   // check for left tree is balanced or not
    pair<bool, int> right = balancedfast(root->right); // check for right tree is balanced or not

    bool l = left.first;
    bool r = right.first;
    bool diff = abs(left.second - right.second) <= 1; // diff bw height of the left and right subtrees for every node is 0 or 1

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1; // height of tree

    if (l && r && diff) // if left and right tree are balanced and height diff of left and right is less than and equals to 1 then return true
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}
// IDENTICAL TREE:- check first root node data of both tree if same then check for left and right so if left and right is tree and root data is same then return true otheriwse false
// ISSUM TREE:- left and right tree sum si equals to root node data , make pair bool ,int curent value will be total sum of curr node that is root node data and left and right subtree data i.e. 2*root->data and bool will tree left adn right is sumtree or not , if sum->left and right both true and both sum is equals to curr node then return true

// ZIGZAG TRAVERSAL OF A BINARY TREE
vector<int> zigzagtraversal(node *root)
{
    vector<int> result; // FINAL RESULT
    if (root == nullptr)
    {
        return result;
    }
    queue<node *> q;
    q.push(root); // push root node

    bool lefttoright = true; // take a boolean variable which willtell we have to print values from left to right ot right to left at this time
    while (!q.empty())       // loop untill queue is empty
    {
        int size = q.size();
        vector<int> ans(size); // ans vector of size of queue data at one height or level
        for (int i = 0; i < size; i++)
        {
            node *temp = q.front();
            q.pop();

            int index = lefttoright ? i : size - i - 1; // if left to right then forward order  like 0,1,2 if right to left then reverse array
            ans[index] = temp->data;

            // push next level all nodes(left adn right) in tree
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }

        lefttoright = !lefttoright;
        for (auto i : ans)
        {
            result.push_back(i);
        }
    }
    return result;
}

// ------------------------------------------Boundary Traversal---------------------------------------------
void printLeft(node *root, vector<int> &ans)
{
    if (root == nullptr || (root->left == nullptr && root->right == nullptr))
    {
        return;
    }

    cout << "left " << root->data << endl;
    ans.push_back(root->data);
    if (root->left)
    {
        printLeft(root->left, ans);
    }
    if (root->right)
    {
        printLeft(root->right, ans);
    }
}

void printRight(node *root, vector<int> &ans)
{
    if (root == nullptr || (root->left == nullptr && root->right == nullptr)){
        return;
    }
    if (root->right){

        printRight(root->right, ans);
        cout << "right " << root->data << endl;
        ans.push_back(root->data);
    }
    else if (root->left)
    {
        cout << "right " << root->data << endl;
        printRight(root->left, ans);
        ans.push_back(root->data);
    }
}

void printLeaf(node *root, vector<int> &ans)
{
    if (root == nullptr)
    {
        return;
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        cout << "leaf " << root->data << endl;
        ans.push_back(root->data);
        return;
    }
    printLeaf(root->left, ans);
    printLeaf(root->right, ans);
}

vector<int> boundaryTraversal(node *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    ans.push_back(root->data);
    printLeft(root->left, ans);

    printLeaf(root->left, ans);
    printLeaf(root->right, ans);

    printRight(root->right, ans);
}

// -----------------------------------VERTICAL ORDER TRAVERSAL---------------------------
// horizontal values, level, then values according to level like -2,-1, 0 1, 2, 3 are all horizontal values then
// level we know height from root 0,1,2,3,4, then accoridng to level nodes so we will create map with hv, and one pair which contains level and values
// <-2> 1 2 3, <-1> 098409384
// make one queue which contains ofc one node and then one pair of hv and level
vector<int> verticalTraversal(node *root)
{ // horizontal dstance, level, vector of level
    map<int, map<int, vector<int>>> nodes;
    // node, hd , level
    queue<pair<node *, pair<int, int>>> q;
    vector<int> ans;

    if (root == nullptr)
    {
        return ans;
    }
    q.push(make_pair(root, make_pair(0, 0)));

    while (!q.empty())
    {
        pair<node *, pair<int, int>> temp = q.front();
        q.pop();
        node *frontnode = temp.first;
        int hv = temp.second.first;
        int level = temp.second.second;

        nodes[hv][level].push_back(frontnode->data);
        if (frontnode->left)
            q.push(make_pair(frontnode->left, make_pair(hv - 1, level + 1)));
        if (frontnode->right)
            q.push(make_pair(frontnode->right, make_pair(hv + 1, level + 1)));
    }

    for (auto i : nodes)
    {
        for (auto j : i.second)
        {
            for (auto k : j.second)
            {
                ans.push_back(k);
            }
        }
    }
    return ans;
}

// ------------------TOP VIEW-------------------
vector<int> topview(node *root)
{
    // hv    node top value
    map<int, int> top;
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    //    node value   hv
    queue<pair<node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<node *, int> temp = q.front();
        q.pop();
        node *frontnode = temp.first;
        int hd = temp.second;

        // maintaining one to one mapping if one value present at hd then nothing to do
        if (top.find(hd) == top.end())
        {
            top[hd] = frontnode->data;
        }
        if (frontnode->left)
            q.push(make_pair(frontnode->left, hd - 1));
        if (frontnode->right)
            q.push(make_pair(frontnode->right, hd + 1));
    }

    for (auto i : top)
    {
        ans.push_back(i.second);
    }
    return ans;
}

// --------------------------------------------------BOTTOM vIEW----------------------------------
vector<int> bottomview(node *root)
{
    // hv    node top value
    map<int, int> top;
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    //    node value   hv
    queue<pair<node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<node *, int> temp = q.front();
        q.pop();
        node *frontnode = temp.first;
        int hd = temp.second;

        // maintaining one to one mapping if one value present at hd then nothing to do
        // if (top.find(hd) == top.end())
        // {
        top[hd] = frontnode->data;
        // }
        if (frontnode->left)
            q.push(make_pair(frontnode->left, hd - 1));
        if (frontnode->right)
            q.push(make_pair(frontnode->right, hd + 1));
    }

    for (auto i : top)
    {
        ans.push_back(i.second);
    }
    return ans;
}

//-----------------------------------------LEFT VIEW---------------------------------
vector<int> solve(node *root, vector<int> &ans, int level)
{
    if (root == nullptr)
    {
        return ans;
    }
    if (level == ans.size()) // if level and vector elements is equal
    {
        ans.push_back(root->data);
    }
    solve(root->left, ans, level + 1);
    solve(root->right, ans, level + 1);
}
vector<int> leftview(node *root)
{
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}

//-----------------------------------------RIGHT VIEW--------------------------------------
vector<int> solver(node *root, vector<int> &ans, int level)
{
    if (root == nullptr)
    {
        return ans;
    }
    if (level == ans.size())
    {
        ans.push_back(root->data);
    }
    solver(root->right, ans, level + 1);
    solver(root->left, ans, level + 1);
}
vector<int> rightview(node *root)
{
    vector<int> ans;
    solver(root, ans, 0);
    return ans;
}

//-----------------------------Morris Traversal -> Inorder-------------------------
node *findpredescessor(node *root)
{
    node *curr = root;
    curr = curr->left;
    while (curr->right != nullptr && curr->right != root)
    {
        curr = curr->right;
    }
    return curr;
}
void morristraversal(node *root)
{
    node *curr = root;
    while (curr != nullptr)
    {
        if (curr->left == nullptr)
        {
            cout << curr->data << " ";
            curr = curr->right;
        }
        else
        {
            node *pred = findpredescessor(curr);
            if (pred->right == nullptr)
            {
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                pred->right = nullptr;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

//--------------------------------FLATTEN BINARY TREE---------------------
node *flattenbt(node *root)
{
    node *curr = root;
    while (curr != nullptr)
    {
        if (curr->left)
        {
            node *pred = findpredescessor(curr);
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = nullptr;
        }
        curr = curr->right;
    }
}

int main()
{
    node *root = NULL;
    root = createtree(root);
    // buildfromlevelorder(root);
    cout << "level order traversal:- " << endl;
    levelordertraversal(root);
    cout << endl;

    // cout << "inorder traversal:- " << endl;
    // inorder(root);
    // cout << endl
    //      << "preorder traversal:- " << endl;
    // preorder(root);
    // cout << endl
    //      << "postorder traversal:- " << endl;
    // postorder(root);

    // cout << endl
    //      << "height of the tree:- " << endl;
    // cout << heighttree(root);

    // cout << endl
    //      << "diameter of the tree" << endl;
    // cout << diameterfast(root).first;

    // cout << endl
    //      << "check for a balanced tree" << endl;
    // cout << balancedfast(root).first;

    // cout << endl
    //      << "sigzag traversal of a tree" << endl;
    // vector<int> arr = zigzagtraversal(root);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    cout
        << endl
        << "boundary traversal" << endl;
    vector<int> barr = boundaryTraversal(root);
    for (int i = 0; i < barr.size(); i++)
    {
        cout << barr[i] << " ";
    }

    // cout
    //     << endl
    //     << "vertical traversal" << endl;
    // vector<int> varr = verticalTraversal(root);
    // for (int i = 0; i < varr.size(); i++)
    // {
    //     cout << varr[i] << " ";
    // }

    // cout
    //     << endl
    //     << "Top View of Tree" << endl;
    // vector<int> top = topview(root);
    // for (int i = 0; i < top.size(); i++)
    // {
    //     cout << top[i] << " ";
    // }

    // cout
    //     << endl
    //     << "Bottom View of Tree" << endl;
    // vector<int> bot = bottomview(root);
    // for (int i = 0; i < bot.size(); i++)
    // {
    //     cout << bot[i] << " ";
    // }

    // cout
    //     << endl
    //     << "Left View of Tree" << endl;
    // vector<int> left = leftview(root);
    // for (int i = 0; i < left.size(); i++)
    // {
    //     cout << left[i] << " ";
    // }

    // cout
    //     << endl
    //     << "Right View of Tree" << endl;
    // vector<int> right = rightview(root);
    // for (int i = 0; i < right.size(); i++)
    // {
    //     cout << right[i] << " ";
    // }

    cout << "Morris Traversal:- " << endl;
    morristraversal(root);

    cout << "Flatten Binary Tree:- " << endl;
    flattenbt(root);
    levelordertraversal(root);

    return 0;
}

/*
              1
        2           3
    4       6   8        9
n       nn   nn     n  n    n
1 2 4 -1 -1 6 -1 -1 3 8 -1 -1 9 -1 -1
1 2 3 4 6 8 9 -1 -1 -1 -1 -1 -1 -1 -1

level order traversal:-
1
2 3
4 6 8 9

inorder
4 2 6 1 8 3 9
preorder traversal:-
1 2 4 6 3 8 9
postorder traversal:-
4 6 2 8 9 3 1
*/

////1 2 3 8 -1 -1 -1 5 -1 9 -1 -1 4 6 -1 -1 7 10 -1