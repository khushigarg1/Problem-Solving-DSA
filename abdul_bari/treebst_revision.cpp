#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
        int data;
        Node *left;
        Node *right;
        Node(int data)
        {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
        
};

void inorder(Node *root)
{
    if(root == nullptr)
    {
        return ;
    }
    inorder(root->left);
    cout << root->data <<" ";
    inorder(root->right);
}

void inorderstack(Node *node)
{
    stack <Node*> s;
    Node * curr = node;
    while(!s.empty() || curr!=nullptr)
    {
        while(curr!= nullptr)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data;
        curr = curr->right;
    }
    cout << endl;
}

void preorder(Node *root)
{
    if(root== nullptr)
    {
        return;
    }
    cout << root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node * root)
{
    if(root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data <<" ";
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(7);
    root->left->right = new Node(9);
 
    cout << "\nPreorder traversal of binary tree is \n";
    preorder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);
    inorderstack(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    postorder(root);
return 0;
}