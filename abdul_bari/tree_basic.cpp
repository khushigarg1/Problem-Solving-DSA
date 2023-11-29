// /*
// TREEE
// it is a collection of treenodes where one of the treenode is taken as root treenode and rest of the treenode  are divided into disjoint subsets and each subsets is also a subtreenodee or a treenodee
    
// binary treenode = degree = 2
//               it can have <2 children  but not more than 2 children
//               left child        right child
//               children can have 0 , 1, 2
// */
// #include<bits/stdc++.h>
// using namespace std;

// class node
// {
//     public :
//         int data;
//         node *lchild;
//         node *rchild;
// };
// class treenode{
//     public :
//         // treenode *root;
//         // treenode *lchild;
//         // treenode *rchild;
//         int data;
//         treenode(){
//             lchild = rchild = nullptr;
//         }
//         treenode(int data)
//         {
//             this->data = data;
//             this->lchild = nullptr;
//             this->rchild = nullptr;
//         }
//         void create_treenode(treenode **root);
//         void preorder(treenode *p);
//         void postorder(treenode *p);
//         void inorder(treenode *p);
//         void level_order(treenode *p);
//         int heightt(treenode *root);
//         int count(treenode *root);
// };

// class queue1 {
//     // private:
//     public:
//         int front;
//         int rear;
//         int size;
//         treenode **q;
//         queue1()
//         {   front = rear = -1;
//             size = 10;
//             q = new treenode*[size];
//         }
//         queue1(int size)
//         {   front = rear = -1;
//             this->size = size;
//             q = new treenode*[size];
//         }
//         void enqueue1(treenode* x)
//         {
//             if(rear == front)
//             {
//                 cout << "queue1 is full "<<endl;
//             }
//             else
//             {
//                 rear= (rear+1)%size;
//                 q[rear] = x;
//             }
//         }
//         treenode* dequeue1()
//         {
//             if(front == rear && front ==-1){
//                 cout << "queue1 is empty"<<endl;
//                 return 0;
//             } 
//             else{
//                 treenode* p = q[front];
//                 if(front == rear)
//                 {
//                     front = rear = -1;
//                 }
//                 front = (front+1)%size;
//                 return p;
//             }
//         }
//         void display()
//         {
//             for (int i = front ; i != rear; i = (i+1)%size)
//             {
//                 cout << q[i] <<endl;
//             }
//             cout << endl;
//         }
//         bool is_empty1()
//         {    
//             return ((rear+1)%size == front);
//         }
// };

// void treenode :: create_treenode(treenode **root){
//     treenode *p , *t;
//     int x;
//     queue1 q(50);
//     cout << "enter root value ";
//     cin >> x;
//     *root = new treenode(x);
//     q.enqueue1(*root);

//     while (!q.is_empty1())
//     {
//         p = q.dequeue1();
//         cout << "enter left child of "<< p->data << " :- ";
//         cin >> x;
//         if(x != -1){
//             t = new treenode(x);
//             p->lchild = t;
//             q.enqueue1(t);
//         } 
//         cout << "enter right child of "<<p->data << " :- ";
//         cin >> x;
//         if(x != -1){
//             t = new treenode(x);
//             p->rchild = t;
//             q.enqueue1(t);
//         }
//     }
// }

// void treenode :: preorder(treenode *p)
// {
//     if(p){
//         cout << p->data;
//         preorder(p->lchild);
//         preorder(p->rchild);
//     }
// }

// void treenode::inorder(treenode *p)
// {
//     if(p){
//         preorder(p->lchild);
//         cout << p->data;
//         preorder(p->rchild);
//     }
// }

// void treenode :: postorder(treenode *p)
// {
//     if(p){
//         preorder(p->lchild);
//         preorder(p->rchild);
//         cout << p->data;
//     }
// }

// void treenode :: level_order(treenode *root)
// {
//     queue1 q(100);
//     cout << root->data;
//     q.enqueue1(root);
//     while (!q.is_empty1())
//     {
//         root = q.dequeue1();
//         if(root->lchild)
//         {
//             cout << root->lchild->data;
//             q.enqueue1(root->lchild);
//         }
//         if(root->rchild)
//         {
//             cout << root->rchild->data;
//             q.enqueue1(root->rchild);
//         }
//     }
// }

// int treenode :: heightt(treenode *root)
// {
//     int x = 0 , y =0;
//     if(root ==0)
//         return 0;
//     x = heightt(root->lchild);
//     x = heightt(root->rchild);
//     if(x > y)
//         return x+1;
//     else   
//         return y+1;
// }

// int count(treenode *root)
// {
//     int x ,  y;
//     if(root != nullptr)
//     {
//         x = count(root->lchild);
//         y = count(root->rchild);
//         return x+y+1;
//     }
//     return 0;
// }
// int main(){
//     treenode t;
//     treenode *root;
//     t.create_treenode(&root);
//     t.preorder(root);
//     // t.inorder(t.root);
//     // t.postorder(t.root);
//     // t.level_order(t.root);
//     // t.heightt(root);
//     // t.count(t.root);
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class tnode{
    public:
        int data;
        tnode *left;
        tnode *right;

        tnode():data(-1) , left(nullptr) , right(nullptr){}
        tnode(int _data) : data(_data) , left(nullptr) , right(nullptr){} 
};

class queueQ{
    tnode** q;
    int front , rear , size ;
    public :
        queueQ() : size(10) , front(-1)  , rear(-1) , q(new tnode*[size]){
            // q = new tnode*[size];
        } 
        queueQ(int _size) : size(_size), front(-1), rear(-1), q(new tnode*[size]){}
        void enqueue(tnode* data)
        {
            if( (rear+1)%size == front)
            {
                cout << "queue is fulll huhhhh .....\n";
                return ;
            }
            else{
                if(front == -1 )
                {
                    front = 0;
                }
                rear = (rear+1)%size;
                q[rear] = data;
            }
        }
        tnode *dequeue()
        {
            if(front == rear && front == -1)
            {
                cout << "queue is empty huhhhhh..noobdeee\n";
                return nullptr;
            }
            else{
                tnode* temp =  q[front];
                if(front == rear){
                    front = rear = -1;
                }
                else{
                    front = (front+1)%size;
                }
                return temp;
            }
        }
        bool isempty(){
            return (front == rear && front == -1);
        }
};

class treeS{
    public :
        tnode *root;
        treeS(){
            root = nullptr; }
        void createtree();
        void preorder(tnode *);
        void preorder(){
            preorder(root); 
        }
        void postorder();
        void inorder();
        void levelorder();
        void heighttree();
        void counttree();
};

void treeS :: createtree()
{
    tnode *p , *t;
    int x;
    queueQ q;
    cout << "enter the vale of root :- ";
    cin >> x;
    root = new tnode(x);

    q.enqueue(root);
    while (!q.isempty())
    {
        p = q.dequeue();
        cout <<"enter the left  child of "<< p->data << " : ";
        cin >> x;
        if(x != -1)
        {
            t = new tnode(x);
            p->left = t;
            q.enqueue(t);
        }
        cout <<"enter the right  child of "<< p->data << " : ";
        cin >> x;
        if(x != -1)
        {
            t = new tnode(x);
            p->right = t;
            q.enqueue(t);
        }
    }
}

void treeS :: preorder(tnode * root)
{
    if(root)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
int main(){
    treeS t;
    t.createtree();
    t.preorder();
return 0;
}