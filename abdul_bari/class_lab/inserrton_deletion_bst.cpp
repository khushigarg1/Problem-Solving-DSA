#include<bits/stdc++.h>
using namespace std;

class treenode{
    public :
        int data;
        treenode *left ;
        treenode *right;
        treenode(){}
        treenode(int data)
        {
            this->data = data;
            left= nullptr;
            right = nullptr;
        }
};

void BST(treenode **root , int key)
{
    if(*root == nullptr)
    {
        *root = new treenode(key);
        return;
    }
    else if((*root)->data == key)
    {
        cout << "sorry we cannot insert the key "<<endl;
        return;
    }
    else if(key < (*root)->data)
    {
        // root = root->left;
        BST(&(*root)->left , key);
    }
    else if(key > (*root)->data)
    {
        BST(&(*root)->right , key);
    }
    // root = newnode;
}

void inorder(treenode *root)
{
    if(root != nullptr)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(treenode *root)
{
    if(root != nullptr)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(treenode *root)
{
    if(root!= nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

void level_order(treenode *root)
{
    if(root == nullptr)
    {
        cout << "underflow "<<endl;
        return;
    }
    queue <treenode* > q;
    q.push(root);
    // cout << root->data << " ";
    while (!q.empty())
    {
        root = q.front();
        cout << root->data << " ";
        q.pop();
        if(root->left)
        {
            // cout << root->left->data << " ";
            q.push(root->left);
        }
        if(root->right)
        {
            // cout << root->right->data << " ";
            q.push(root->right);
        }
    }
}

// treenode* findlargest(treenode *root)
// {
//     root = root->right;
//     return root;
// }

void deletenode(node **temp ,int key)
{
    treenode *root = *temp;
    if(*temp == nullptr)
        return;
    else if((*temp)->data > key)
        (*temp)->left = deletenode(&(*temp)->left , key);
    else if ((*temp)->data < key)
        (*temp)->right = deletenode(&(*temp)->right , key);
    else
    {
        if( ((*temp)->left) && ((*temp)->right) )
        {
            delete[] *temp;
        }
    }
}

int main(){
    treenode *root = nullptr;
    BST(&root , 20);
    BST(&root , 10);
    BST(&root , 30);
    BST(&root , 40);
    BST(&root , 5);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    level_order(root);
    cout << endl;
    deletenode(&root , 10);
    level_order(root);
    return 0;
}

// treenode* minvaluerstree(treenode* temp){
//   while(temp && temp->left != NULL){
//     temp = temp->left;
//   }
//   return temp;
// }

// void deletenode(treenode** temp, int key){
//     if(*temp == NULL){
//         return;
//     }
//     if((*temp)->data > key){
//         deletenode(&(*temp)->left, key);
//     }
//     else if((*temp)->data < key){
//          deletenode(&(*temp)->right, key);
//     }

//     else{
//         if((*temp)->right == NULL && (*temp)->left == NULL){
//             return;
//         }
//         else if((*temp)->right == NULL && (*temp)->left != NULL){
//             // treenode* ptr = temp->left;
//             free(*temp);
//             return;
//         }
//         else if((*temp)->right != NULL && (*temp)->left == NULL){
//             // treenode* ptr = temp->right;
//             free(*temp);
//             return;
//         }
//         treenode* ptr = minvaluerstree((*temp)->right);
//         (*temp)->data = ptr->data;
//         deletenode(&(*temp)->right, ptr->data);
//     }
// }