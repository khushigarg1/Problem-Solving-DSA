//BINARY SEARCH TREEE IN THIS TREEE ROOT > ROOT->LEFT AND ROOT < ROOT->RIGHT 
/*
O(logn) min time complexity and max n
*/
#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
        int data;
        node *left;
        node *right;
        node(){}
        // node(int key) : data(key) , left(nullptr) , right(nullptr) {}
        node(int key)
        {
            this->data = key;
            this->left = nullptr;
            this->right = nullptr;
        } 
};
//SEARCHING ELEMENT IN THE BST BY RECURSION
void search_recursive(node *root , int key)
{
    if(root == nullptr)
    {
        cout << "\nsorry key is not present ";
        return ;
    }
    else if(key == root->data)
    {
        cout << "\nkey element is foundd ";
        return ;
    }
    else if(key < root->data)
        search_recursive(root->left , key);
    else
        search_recursive(root->right , key);
}

//searching node by recursion and return type is node*
node * search_n(node *root , int key)
{
    if(root == nullptr)
        return nullptr;
    if(key == root->data)
        return root;
    else if(key < root->data)
        return search_n(root->left , key);
    else
        return search_n(root->right , key);
}
//SEARCH WITHOUT RECURSION
node *search_iterative(node *root , int key)
{
    while (root != nullptr)
    {
        if(root->data == key)
            return root;
        else if(root->data > key)
            root = root->left;
        else 
            root = root->right;
    }
    return nullptr;
}

//INSERTION IN BST WITHOUR RECURSION
void insert_node(node **root , int key)
{
    node *temp = *root;
    if( (*root) == nullptr )                    //when treee is empty  that is root == nullptr
    {
        (*root) = new node(key);
        return ;
    }
    while (temp != nullptr)
    {
        if(key  == temp->data)        //if key is already available then return 
        {
            cout << "we cannot insert element in this bst bcoz it is already  available \n";
            return;
        }
        else if(key > temp->data)               //if key > root then go to right 
        {
            if(temp->right){
                temp = temp->right;
            }
            else{
                temp->right = new node(key);
                break;
            }
        }
        else                                    //if key > root then go to left 
        {
            if(temp->left)
                temp = temp->left;
            else
            {
                temp->left = new node(key);
                break;
            }
        }
    }
}

//INSERTION IN BST RECURSIVELY
void rinsert(node **root , int key)
{
    if(*root == nullptr)
    {
            *root = new node(key);
            return ;
    }
    else if((*root)->data == key)
    {
        cout << "sorry we cannot insert \n"; 
        return ;
    }
    else if(key > (*root)->data){
        if((*root)->right)
            rinsert(&(*root)->right , key); 
        else 
            (*root)->right = new node(key);
    }
    else
    {   if((*root)->left)
            rinsert(&(*root)->left , key);
        else
            (*root)->left =  new node(key);
    }
}

Node* inPre(Node*p){//inorder predecessor
     while(p and p->right){
         p = p -> right;
     }
     return p;
}
Node* inSucc(Node*p){//inorder successor
    while (p and p->left)
    {
        p = p -> left;
    }
    return p;
    
}
int maxHeight(Node* root){

    if (root == nullptr)
    {
        return 0;
    }
    int hl = 0,hr = 0,hfianl;//height left, height right , hright final to return
    if (root->left)//if left treee is present
    {
        hl = maxHeight(root->left) + 1;//calculates the height of left tree
    }
    if (root->right)//if right treee is present
    {
        hr = maxHeight(root->right) + 1;//calculates the height of right tree
    }
    hfianl = max(hr,hl); // only the max height form both the trees is selected
    return hfianl;// height + 1 because we have to consider the currrent node. 
    //NOTE : traditionally, height of a single node is 0, so we can remove the '+1' from return to get that tradional value
}
// //DELETING NODE AT ANY POSITION
// void delete_bst(node **root , int key)
// {
//     node *curr =*root , *prev = curr;
//     if(*root ==  nullptr)
//     {
//         return ;
//     }
//     while (curr->data != key)
//     {
//         prev = curr;
//         if(curr->data > key){
//             curr = curr->left;
//         }
//         else  curr = curr->right;
//         if(curr == nullptr)
//         {
//             return ;
//         }
//     }
//     if(curr->left && curr->right)
//     {
//         node *rep , *repprev = curr;    //replace pointer which will replace currently delted node
//         rep = curr->right;
//         while (rep->left != nullptr)
//         {
//             repprev = rep;
//             rep = rep->left;
//         }
//         repprev->left = rep->right;
//         rep->left = curr->left;
//         rep->right = curr->right;
//         if(curr == *root)         //IF KEY ELEMENT IS ROOT
//         {
//             *root = rep;
//         }
//         else if(prev->left == curr)
//         {
//             prev->left = rep;
//         }
//         else if(prev->right == curr)
//         {
//             prev->right = rep;
//         }
//         delete [] curr;
//     }
//     else if(curr->left == nullptr || curr->right == nullptr)
//     {
//         if(curr->left)
//         {
//             if(curr == *root)
//             {
//                 *root = curr->left;
//             }
//             else if(prev->left == curr)
//             {
//                 prev->left = curr->left;
//             }
//             else if(prev->right == curr)
//             {
//                 prev->right = curr->left;
//             }
//             delete [] curr;
//         }
//         else if(curr->right)
//         {
//             if(*root == curr)
//             {
//                 *root = curr->right;
//             }
//             else if(prev->left == curr)
//             {
//                 prev->left = curr->right;
//             }
//             else if(prev->right == curr)
//             {
//                 prev->right = curr->right;
//             }
//             delete [] curr;
//         }
//         //node *replaceptr   = curr->left ? curr->left : curr->right;
//         else
//         {
//             if(*root == curr)
//             {
//                 *root = nullptr;
//             }
//             else if(prev->left == curr)
//             {
//                 prev->left = nullptr;
//             }
//             else if(prev->right == curr)
//             {
//                 prev->right = nullptr;
//             }
//             delete [] curr;
//         }
//     }
// }

Node* deleteBST(Node**  root, int key){
   
   if ((*root) == nullptr)
   {
       return nullptr;
   }
   if ((*root)->data > key)
   {
       (*root)->left = deleteBST(&(*root)->left, key);
   }
   else if ((*root)->data < key)
   {
       (*root)->right = deleteBST(&(*root)->right, key);
   }
   else{
       if ((*root)->left == nullptr and (*root)-> right == nullptr)
       {
           delete [] (*root);
           return nullptr;
       }
       if ((*root)->left == nullptr)
       {
           Node* temp = (*root)->right;
           delete [] (*root);
           return temp;
       }
       if ((*root)->right == nullptr)
       {
           Node* temp = (*root)->left;
           delete [] (*root);
           return temp;
       }
       if( maxHeight( (*root)->left) > maxHeight( (*root)->right) )
       {
            Node* temp = inPre((*root)->left);

            Node *t = new Node(temp->data);
            t->left = (*root)->left; 
            t->right = (*root)->right; 
           
           delete [] (*root);
            (*root) = t;
           (*root)->left = deleteBST(&(*root)->left,temp->data);
        }
        else{
            Node* temp = inSucc((*root)->right);

            Node *t = new Node(temp->data);
            t->left = (*root)->left; 
            t->right = (*root)->right;
            delete [] (*root);

            (*root) = t;
            (*root)->right = deleteBST(&(*root)->right,temp->data);
        }
   }
   return (*root);
}

//CREATING BST BY PREORDER
void create_preorder(node **root , int pre[] , int size_pre )
{
    stack <node*> st;
    node *ptr;
    int i = 0;
    node *newnode = new node(pre[i++]);
    *root = newnode;
    ptr = *root;
    // st.push(newnode);
    while(i < size_pre)
    {
        if(pre[i] < ptr->data)
        {
            newnode = new node(pre[i++]);
            if(ptr == *root)
                (*root)->left = newnode;
            else
            {    ptr->left = newnode;
            }
            st.push(ptr);
            ptr = newnode;
        }
        else if(pre[i] > ptr->data && pre[i] < st.top()->data )
        {
            newnode = new node(pre[i++]);
            ptr->right = newnode;
            ptr = newnode;
        }
        else{
            newnode = new node(pre[i++]);
            ptr =  st.top();
            if(ptr == *root){
                (*root)->right = newnode;
            }
            else{
                ptr->right = newnode;
            }
            ptr = newnode;
            if(!st.empty())
            {
                st.pop(); 
            }
        }
    }
} //O(n)

//CRATING BINARY  TREE BY RECURSION PREORDER
node *Rcreate(int pre[] , int *preindex , int key , int min , int max , int size)
{
    if(*preindex >= size)
    {
        return nullptr;
    }
    node *root = nullptr;
    if(key > min && key < max)
    {
        root = new node(key);
        *preindex = *preindex + 1;
        if(*preindex < size)
            root->left = Rcreate(pre , preindex , pre[*preindex] , min, key , size);
        if(*preindex < size)
            root->right = Rcreate(pre , preindex , pre[*preindex] , key, max , size);
    }
    return root;
}

//main fucntion to construct bst by recursion
node *construct_bst(int pre[] , int n)
{
    int preindex = 0;
    return Rcreate(pre , &preindex , pre[preindex] , INT_MIN , INT_MAX , n);
}
void levelorder(node *root)
{
    queue<node*> q1;
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

void  preorder(node *p)
{
    if(p){
        cout << p->data << " ";
        preorder(p->left);
        preorder(p->right);
    }
}
void  inorder(node *p)
{
    if(p){
        inorder(p->left);
        cout << p->data << " ";
        inorder(p->right);
    }
}
void  postorder(node *p)
{
    if(p){
        postorder(p->left);
        postorder(p->right);
        cout << p->data << " ";
    }
}
int main(){
    
    // node *root = nullptr;
    // insert_node(&root , 30);
    // insert_node(&root , 20);
    // insert_node(&root , 40);
    // insert_node(&root , 35);
    // insert_node(&root , 45);
    // insert_node(&root , 25);
    // insert_node(&root , 15);
    // insert_node(&root , 42);
    // insert_node(&root , 43);
    // preorder(root);
    // cout << endl;
    // levelorder(root);
    // inorder(root);
    
    // search_recursive(root , 80);
    // node *value = search_n(root , 35);
    // cout << value->data <<endl;
    // value->data = 25;
    // inorder(root);
    // if(search_iterative(root , 35))
    //     cout << << "\nkey is found ";
    // else
    //     cout << "\nkey element is not found "; 

    // cout << endl;
    // delete_bst(&root , 42);
    // delete_bst(&root , 30);
    // delete_bst(&root , 15);
    // inorder(root);

    // node *root1 = nullptr;
    int pre_order[] = {30 , 20 , 10 , 15 , 25 , 40 ,38 ,  50 , 45};
    int size_preorder = sizeof(pre_order)/sizeof(pre_order[0]);
    // create_preorder(&root1 , pre_order ,size_preorder);
    node *root1 = construct_bst(pre_order , size_preorder);
    inorder(root1);
    cout << endl;
    preorder(root1);
    cout << endl;
    levelorder(root1);
    postorder(root1);
return 0;
}
