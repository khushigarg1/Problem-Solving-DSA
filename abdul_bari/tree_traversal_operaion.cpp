#include<bits/stdc++.h>
using namespace std;
class treenode
{
    public:
        int data;
        treenode *left;
        treenode *right;
        treenode(){ }
        treenode(int data)
        {
            this->data = data;
            left = nullptr;
            right = nullptr;
        }
};

void createTree(treenode** root){
    treenode *t,*p;
    queue<treenode*> q;
    int x;
    cout<<"Enter a root: ";\
    cin>>x;
    *root = new treenode(x);
    q.push(*root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout<<"Enter left child: ";
        cin>>x;
        if (x != -1)
        {
            t = new treenode(x);
            p ->left = t;
            q.push(t);
        }
        cout<<"Enter right child: ";
        cin>>x;
        if (x != -1)
        {
            t = new treenode(x);
            p ->right = t;
            q.push(t);
        }
     }
}

int search(int inorder[] , int st , int e , int currentt)
{
    for (int i = st; i <= e; i++)
    {
        if(inorder[i] == currentt)
        {
            return i;
        }
    }
    return -1;
}

//creating tree by inorder and  preorder  traversal
treenode *buildtree(int pre[] , int in[] , int start , int end)
{
    static int preindex = 0;
    if(start > end)
    {
        return nullptr;
    }
    int curr = pre[preindex];
    preindex++;
    treenode *newtreenode = new treenode(curr);
    if(start == end)
    {
        return newtreenode;
    }
    int pos = search(in , start , end , curr);
    newtreenode ->left = buildtree(pre , in , start , pos-1);
    newtreenode->right = buildtree(pre , in , pos+1 , end);
    return newtreenode;
}

//creating tree by postorder  or  inorder traversal
treenode *buildtree_post_in(int post[] , int in[] , int start , int end)
{
    static int ind = end;
    if(start > end)
    {
        return nullptr;
    }
    int curr = post[ind];
    ind--;
    treenode *newtreenode = new treenode(curr);
    if(start == end)
    {
        return newtreenode;
    }
    int pos = search(in , start , end , curr);
    newtreenode->right = buildtree_post_in(post , in , pos+1 , end);
    newtreenode->left = buildtree_post_in(post , in , start , pos-1);
    return newtreenode;
}

void Preorderr(treenode *root)
{
    stack <treenode*> st;
//WITHOUT RECURSION AND BY USING STACK
    while (1)
    {
        while (root)
        {
            cout << root->data <<" ";
            //if left subtree exists add to stack fot further use 
            st.push(root);           
            root = root->left ;
        }
        if(st.empty())
            break;                    //no more treenodes left so fxn over
        root = st.top();          //first in first out
        st.pop();                     //pop top element 
        root = root-> right;
    }
    cout << endl;
}

void Inorderr(treenode *root)
{
//WITHOUT RECURSION AND BY USING STACK
    stack <treenode* > st1;
    while(1)
    {
        while (root)
        {
            st1.push(root);
            root = root->left;
        }
        if(st1.empty())
            break;
        root = st1.top();
        st1.pop();
        cout << root->data << " ";
        root = root->right;
    } 
    cout << endl;
}

void postOrder_traversal(treenode * root){
//method 1: recursive
    // if (root)
    // {
    //     postOrder_traversal(root->left);
    //     postOrder_traversal(root->right);
    //     cout<<root->data<<" ";
    // }    
//method 2: iterative
    if (root == nullptr)
    {
        return;
    } 
    stack <treenode *> s1, s2;
    treenode* node;
    s1.push(root);
    while (!s1.empty())
    {
        node = s1.top();
        s1.pop();
        if(node->left)
             s1.push(node->left);
        if(node->right)
             s1.push(node->right);
        s2.push(node);
    }
    while(!s2.empty())
    {
        node = s2.top();
        cout<<node->data <<" ";
        s2.pop();
    }
}

void levelorder(treenode *root)
{
    queue<treenode*> q1;
    q1.push(root);
    cout << root->data << " ";
    while (!q1.empty())
    {
        root = q1.front();
        q1.pop();
        if(root->left)
        {
            cout << root->left->data <<" ";
            q1.push(root->left);
        }
        if(root->right)
        {
            cout << root->right->data << " ";
            q1.push(root->right);
        }
    }
    cout << endl;
}

int count_node(treenode *root)
{
    int x , y;
    if(root != nullptr)
    {
        x = count_node(root->left);
        y = count_node(root->right);
        return x+y+1;
    }
    return 0;
    // if(root ==nullptr)
    //     return 0;
    // else
    //     return count_leafnode(root->left) +
    //            count_leafnode(root->right) + 1;
}

//number of nodes which are having both the children 
int count_double(treenode *root)
{
    int x , y;
    if(root != nullptr)
    {
        x = count_double(root->left);
        y = count_double(root->right);
        if(root->left && root->right)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

//TO COUNT LEAF NODES OF THE TREE
int count_leafnode(treenode *root)
{
    int x ,  y;
    if(root ==nullptr)
        return 0;
    if(root!= nullptr)
    {
        x = count_leafnode(root->left);
        y =  count_leafnode(root->right);
        if(root->left== nullptr && root->right == nullptr)
        {    return x+y+1;}
        else
        {    return x+y;}
    }
    return INT_MIN;
}

//count nonleaf nodes are 
int count_nonleafnode(treenode *root)
{
    int x , y;
    if(root!= nullptr)
    {
        x = count_nonleafnode(root->left);
        y =  count_nonleafnode(root->right);
        if(root->left!= nullptr || root->right != nullptr || (root->left && root->right))
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

//sum of all the elements  inn the tree 
int sum_node(treenode *root)
{
    int x , y;
    if(root != nullptr)
    {
        x = sum_node(root->left);
        y = sum_node(root->right);
        return x+y+root->data;
    }
    return 0;
}

//height of the tree 
int height_node(treenode *root)
{
    int x , y;
    if(root != nullptr)
    {
        x = height_node(root->left);
        y = height_node(root->right);
        if(x > y)
            return x+1;
        else
            return y+1;
    }
    return 0;
}

int main(){
    treenode *root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root->left->left = new treenode(4);
    root->left->right = new treenode(5);
    // root->left->left->right = new treenode(9);
    root->right->left = new treenode(6);
    root->right->right = new treenode(7);
    Preorderr(root);
    Inorderr(root);
    levelorder(root);
    postOrder_traversal(root);
    cout << endl;
    cout << "total node are " << count_node(root) <<endl ;
    cout << "height of the node " << height_node(root) << endl;
    cout << "sum of the node " << sum_node(root) << endl;
    cout << "number of nodes which having double node " << count_double(root) << endl;
    cout << "totalleaf node are " << count_leafnode(root)<<endl;
    cout << "total non-leaf node are " << count_nonleafnode(root)<<endl;

    // int preorder[] = {1 , 2 , 4 , 3 , 5};
    // int inorder[] = {4 , 2 , 1 , 5 , 3};
    // treenode* root = buildtree(preorder , inorder , 0 , 4);

    int postorder[] = {4 , 2 , 5 , 3 ,1 };
    int inorder[] = {4 , 2 , 1 , 5 , 3};
    treenode *root1 = buildtree_post_in(postorder , inorder , 0 , 4);
    Inorderr(root1);
    levelorder(root1);
return 0;
}