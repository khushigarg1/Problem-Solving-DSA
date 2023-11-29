#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
        node *left  ;
        node *right;
        int data , height;
        node(){}
        node(int data )
        {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
            this->height = 1;
        }
};

int height_tree(node *root)
{
    if(root == nullptr)
    {
        return 0;
    }
    return root->height;
}
//maximum height of node->left->height and node->right->height
int max_height(int a , int b)
{
    return (a>b) ? a:b;
}

//balamce afctor = 0 , 1 , -1    if bf is 2 and -2 then we have to rotate and shuffle it to balance the tree  but iff it is more than 2 and less than -2 then we cannot do this
int balance_factor(node *root)
{
    if(root== nullptr)
        return 0;
    else 
        return height_tree(root->left) - height_tree(root->right);
}
//right rotation of subtree and thus root = root->left
node *rightrotation(node *root)
{
    node *rootl = root->left;    //rootl = rootleft
    node *templr = rootl->right;     //templr = root->left->right

    rootl->right = root;
    root->left = templr;
    root->height = max(height_tree(root->left) , height_tree(root->right)) + 1;
    rootl->height = max(height_tree(rootl->left) , height_tree(rootl->right)) + 1;
    return rootl;
}

//left rotation of subtrees and root and root = root->right
node *leftrotation(node *root)
{
    node *rootr= root->right;        //rootr = rootright
    node *temprl = rootr->left;

    rootr->left = root;
    root->right = temprl; 
    root->height = max(height_tree(root->left)  , height_tree(root->right)) + 1;
    rootr->height = max(height_tree(rootr->left) , height_tree(rootr->right)) + 1;
    return rootr;
}

node *avl_insert(node *root , int key)
{
    if(root == nullptr)
    {
        node *newnode = new node(key);
        root = newnode;
        return root;
    }
    if(key < root->data)
        root->left = avl_insert(root->left , key);
    else if(key > root->data)
        root->right = avl_insert(root->right , key);
    else
    {    cout << "key is equal to previous node data and we cannot insert same key more than one ";
        return root;
    }
    //updating height of node after inserting ndoe 
    root->height = 1 + max((height_tree(root->left)) , height_tree(root->right)) ;

    //check balance factor
    int bf = balance_factor(root);
    if((bf < -1) && (key > root->right->data))
        return leftrotation(root);
    if(bf > 1 && key < root->left->data)
        return rightrotation(root);
    if(bf < -1 && key < root->right->data)
    {
        root->right = rightrotation(root->right);
        return leftrotation(root);
    }
    if(bf > 1 && key > root->left->data)
    {
        root->left  = leftrotation(root->left);
        return rightrotation(root);
    }
    return root;
}

node * minvalue_treenode(node *root)
{
    node *current = root;
    while (current->left != nullptr)
    {
        current = current->left;
    }
    return current;
}

node *avl_delete(node *root, int key)
{
    if(root == nullptr)
        return root;
    if(key < root->data)
        root->left = avl_delete(root->left , key);
    else if(key > root->data)
        root->right = avl_delete(root->right , key);
    else
    {
        if(root->left == nullptr || root->right == nullptr)
        {
            node *temp = root->left ? root->left : root->right;
            if(temp == nullptr)
            {
                temp = root;
                root = nullptr;
            }
            else
            {
                *root = *temp;
            }
            delete [] temp;
        }
        else
        {
            node *temp = minvalue_treenode(root->right);
            root->data = temp->data;
            root->right = avl_delete(root->right , temp->data);
            // delete [] temp;
        }
    }
    if(root== nullptr)
    {    return root;
    }
    root->height = 1 + max(height_tree(root->left) , height_tree(root->right));

    int bf = balance_factor(root);
    int bfleft = balance_factor(root->left);
    int bfright = balance_factor(root->right);
//left left case
    if(bf  > 1 && bfleft >= 0)
    {
            return rightrotation(root);
    }
//left right case
    if(bf > 1 && bfleft < 0)
    {
        root->left = leftrotation(root->left);
        return rightrotation(root);
    }    
//right right case
    if(bf < -1 && bfright <= 0)
    {
            return leftrotation(root);
    }
//right left case
    if(bf < -1 && bfright > 0)
    {
        root->right = rightrotation(root->right);
        return leftrotation(root);
    }
    return root;
}
void inorder_traversal(node *root)
{
    if(root!= nullptr)
    {
        inorder_traversal(root->left);
        cout << root->data << " ";
        inorder_traversal(root->right);
    }
    // cout << endl;
}
void preorder_traversal(node *root)
{
    if(root!= nullptr)
    {
        cout << root->data << " ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}
int main(){
    node *root = nullptr;
    // // cout << root->data << " ";
    // root = avl_insert(root, 10);
    // cout << root->data << " " << endl;
    // root = avl_insert(root, 20);
    // cout << root->data << " " << endl;
    // root = avl_insert(root, 30);
    // cout << root->data << " " << endl;
    // root = avl_insert(root, 40);
    // cout << root->data << " " << endl;
    // root = avl_insert(root, 50);
    // cout << root->data << " " << endl;
    // root = avl_insert(root, 25);
    // cout << root->data << " " << endl;
    // inorder_traversal(root);
    // cout << endl;
    // preorder_traversal(root);
    // cout << endl;
    // cout << root->data << " ";

    root = avl_insert(root, 9);
    root = avl_insert(root, 5);
    root = avl_insert(root, 10);
    root = avl_insert(root, 0);
    root = avl_insert(root, 6);
    root = avl_insert(root, 11);
    root = avl_insert(root, -1);
    root = avl_insert(root, 1);
    root = avl_insert(root, 2);
    preorder_traversal(root);
    cout << endl;
    root = avl_delete(root , 9);
    preorder_traversal(root);
return 0;
}