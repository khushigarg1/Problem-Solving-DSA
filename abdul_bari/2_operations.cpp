#include<bits/stdc++.h>
using namespace std;
class node
{
    public :
    int data;
    node *prev;
    node *next;
    // node(int key)
    // {
    //     this -> data = key;
    //     this -> next = nullptr; 
    //     this -> prev = nullptr; 
    // }
};

//INSERT A NOD AT BEGININNING
void insert_begin(node **head , int key)
{
    node *temp = *head;
    node *newnode = new node;
    newnode-> data = key;
    newnode-> next = nullptr;
    newnode ->prev = nullptr;
    if(temp == nullptr)
    {
        *head = newnode;
    }
    else
    {
        newnode-> next = temp;
        *head = newnode;
    }
}

void print(node **head)
{
    node  *temp = *head;
    while (temp != nullptr)
    {
        cout << temp->data ;
        if(temp->next != nullptr)
        {
            cout << " --> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

//INSERT AT POSITION I
void inseert_i(node **head , int key , int pos)
{
    node *temp = *head;
    node *newnode = new node;
    newnode-> data = key;
    newnode-> next = nullptr;
    int count = 1;
    if(pos == 0)
    {
        newnode->next = temp;
        *head = newnode;
    }
    else
    {
        while (count < pos)
        {
            temp = temp->next;
            count++;
        }
        newnode-> next = temp->next;
        temp->next = newnode;
    }
}

//INSERT LINKED LIST IN SORTED LL
void insert_sort(node **head ,  int key )
{
    node *temp = *head;
    node *newnode = new node;
    newnode-> data = key;
    newnode-> next = nullptr;
    node* p = nullptr;
    if(temp == nullptr)
    {
        *head = newnode;
    }
    else
    {
        while(temp && key > temp->data )
        {
            p = temp;
            temp = temp->next;
        }
        if(temp == *head)
        {
            newnode->next = *head;
            *head = newnode;
        }
        else
        {
            newnode-> next = p-> next;
            p->next = newnode;
        }
    }
}
//INSERT A NODE AT LAST
void append(node **head ,  int key)
{
    node *temp = *head;
    node *newnode = new node;
    newnode-> data = key;
    newnode-> next = nullptr;
    if(temp == nullptr)
    {
        *head = newnode;
    }
    else
    {
        while (temp->next != nullptr)
        {
            temp = temp-> next;
        }
        temp->next = newnode;
    }
}

//COUNT OF LINKED LIST
int count_ll(node **head)
{
    node *temp = *head;
    int count =0;
    while (temp!= nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
//DELETING LINKED  LIST
int delete_node(node **head , int pos)
{
    node *temp = *head;
    node * p = nullptr;
    int count = 0;
    int ele = 0;
    if(temp->next == nullptr)
    {
        cout << "we cannt delete node bcoz the list cannt be empty "<<endl;
        return -1;
    }
    if(pos == 0)
    {
        p = temp;
        ele = temp->data;
        *head = temp->next;
        delete [] p;
        return ele;
    }
    else{
        while (temp!= nullptr && count < pos-1 )
        {
            p = temp;
            temp = temp->next;
            if(temp->next == nullptr)
            {
                return -1;
            }
            count++;
        }
        ele = temp->data;
        p->next = temp->next;
        delete [] temp;
        return ele;
    }
}

//CHECK LINKED LIST IS SORTED OR NOT
int isorted(node **head )
{
    node *temp = *head;
    int x= -8273937;
    while (temp != nullptr)
    {
        if(temp->data < x){
            return 0;
        }
        x = temp->data;
        temp =temp-> next;
    }
    return 1;
}

//REMOVE DUPLICATE ELEMENTS
void remove(node **head)
{
    node *temp = *head;
    node *p = temp->next;
    while (p != nullptr)
    {
        if(temp->data != p->data )
        {
            temp= p;
            p = p->next;
        }
        else
        {
            temp->next = p->next;
            delete [] p;
            p = temp->next;
        }
    }  
}

//COUNT SIZE OF LINKE LIST
int count(node **head)
{
    node *temp = *head;
    int c = 0;
    while (temp!= nullptr)
    {
        c++;
        temp = temp-> next;
    }
    // cout << "size of linked list " << c;
    return c;
}

//REVERSING A LINKED LIST USING ARRAY
void reverse(node **head , int size)
{
    node *p = *head;
    node *temp = p;
    int *arr = new int[size];
    int i = 0;
    while (temp != nullptr)
    {
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }
    temp = p;
    i--;
    while (temp!= nullptr)
    {
        temp->data = arr[i]; 
        temp = temp->next;
        i--;
    }
}

//REVERSE BY SLIDING POINTERS
void reverse2(node **head)
{
    node *temp = *head;
    node *p = nullptr;
    node *q = nullptr;
    while (temp != nullptr)
    {
        q = p;
        p = temp;
        temp = temp->next;
        p-> next = q;
    }
    *head = p;
}

//REVERSE RECURSIVE FUNCTION
void rec_reverse(node **head)
{
    node *temp = *head;
    static node *temp3 = *head;
    static node **temp2 = head;
    if(temp->next == nullptr)
    {
        return;
    }
    *temp2 = (*temp2)->next;
    rec_reverse(&(temp->next));
    if(temp->next)
        temp->next->next = temp;
    if(temp == temp3)
        temp->next = nullptr;
    // return temp;
}

//CONCATENATE TWO LINKED LIST
void concatenate(node **head , node **second)
{
    node *temp = *head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = *second;
}

//MERGING TWO linked list
void merge(node **head , node **second)
{
    node *first = *head;
    node *sec = *second;
    node *last = nullptr;
    if(first->data > sec->data){
        last = *second;
        *head = *second;
        sec =sec->next;
    }
    else{
        last = *head;
        first = first->next;
    }
    while (first != nullptr && sec != nullptr)
    {
        if(sec->data < first->data)
        {
            last->next = sec;
            last = sec;
            sec = sec->next;
            // last->next = nullptr;
        }
        else
        {
            last->next = first;
            last = first;
            first = first->next;
            // last->next = nullptr;
        }
    }
    if(first != nullptr)
    {
        last->next = first;
    }
    else
    {    
        last->next = sec;
    }
    *second = *head;
}

//CHECK LINKED LIST IS IN LOOP OR LINEAR
void loop_lin(node **head)
{
    node *temp = *head;
    node *p ,*q;
    p = q = temp;
    do
    {
        p = p->next;
        q= q->next;
        q=q ? q->next : q;
    } while (p && q && p!=q);

    if(p==q)
    {
        cout << "loop"<<endl;
    }
    else
        cout << "linear"<<endl;
}

// int main(){
//     node *head = nullptr;
//     node *t1 , *t2;
//     // insert_begin(&head , 1);
//     // insert_begin(&head , 0);
//     // insert_begin(&head , 2);
//     // print(&head);

//     // append(&head , 3);
//     // print(&head);

//     // inseert_i(&head , 4 , 0);
//     // print(&head);
//     // inseert_i(&head , 5 , 1);
//     // print(&head);

//     append(&head , 1);
//     append(&head , 3);
//     append(&head , 5);
//     append(&head , 7);
//     append(&head , 9);
//     print(&head);
//     insert_sort(&head , 5);
//     print(&head);
//     insert_sort(&head , 0);
//     print(&head);

//     // cout << "deleted elements is "<< delete_node(&head , 4) << endl;
//     // print(&head);
//     // cout << "deleted elements is "<< delete_node(&head , 0)<<endl;
//     // print(&head);
//     // cout << "deleted elements is "<< delete_node(&head , 9)<<endl;
//     // print(&head);

//     // if(isorted(&head) == 1)
//     // {
//     //     cout << "sorted"<<endl;
//     // }
//     // else
//     //     cout << "not sorted "<<endl;
//     // remove(&head);
//     // print(&head);
//     // int size = count(&head);
//     // reverse(&head , size);
//     // reverse2(&head);
//     // rec_reverse(&head);
//     // print(&head);

//     // node *second = nullptr;
//     // append(&second , 0);
//     // append(&second , 2);
//     // append(&second , 4);
//     // append(&second , 6);
//     // append(&second , 8);
//     // print(&second);
//     // concatenate(&head , &second);
//     // merge(&head , &second);

//     // t1 = head->next->next;
//     // t2 = head->next->next->next->next;
//     // t2->next = t1;
//     // loop_lin(&head);
//     // print(&second);
//     // print(&head);
    
// return 0;
// }