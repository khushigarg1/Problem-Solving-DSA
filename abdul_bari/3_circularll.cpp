#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
        int data;
        node *next;
        //node *prev;
};

//CREATE AN LINKED LIST BY AN ARRAY
void create(int arr[] , int n , node **head)
{
    int i=0;
    // node *t;
    node *newnode = new node;
    (*head) -> data = arr[i];
    (*head) = newnode;
    (*head) -> next = *head;
    node *temp = *head;
    for (i = 1; i < n; i++)
    {
        newnode = new node;
        newnode->data = arr[i];
        newnode->next = temp->next;
        // newnode->next = t;
        temp->next = newnode;
        temp  =newnode;
    }
    // *head = newnode;
}

//LENGTH OF LINKED LIST NODES
int count_ll(node **head)
{
    node *temp = *head;
    int len =0;
    if(temp == nullptr)
    {
        return 0;
    }
    do
    {
        len++;
        temp = temp->next;
    }
    while (temp != *head);
    return len+1;
}

//INSERT A NODE
void insert(node **head , int key , int pos)
{
    node *temp  = *head;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    if(pos < 0 || pos > count_ll(head))
    {
        cout << "invalid index "<<endl;
        return;
    }
    if(pos==0)
    {
        if(*head == nullptr)
        {
            *head = newnode;
            newnode->next = *head;
        }
        else
        {
            while (temp->next != *head)
            {
                temp = temp->next;
            }
            newnode->next = *head;
            temp->next = newnode;
            (*head ) = newnode;
        }
    }
    else
    {
        for (int i = 1; i < pos && temp->next != *head ; i++)
        {
            temp = temp->next;
        }
        // if(temp->next == *head)
        // {
        //     newnode ->next = (*head);
        // }
        // else
        // {    
            newnode->next = temp->next;
        // }
        temp->next = newnode;
    }
}

//TO DELETE A NODE FROM LINKE DLIST 
void del_node(node **head , int pos)
{
    int i =0;
    node *temp  = *head;
    node *prev = *head;
    if(pos < 0 || pos > count_ll(head) )
    {
        cout << "invalid index"<<endl;
        return ;
    }
    if(*head == nullptr)
    {
        cout << "empty"<<endl;
        return;
    }
    if(pos ==0){
        while (temp->next != *head)
        {
            // prev = temp;
            temp = temp->next;
        }
        temp->next = prev->next;
        *head  = prev->next;
        delete [] prev;
    }
    else
    {
        // prev= nullptr;
        while (i < pos )
        {
            // prev = prev->next;
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next  = temp->next;
        // delete[] temp;
        delete  [] temp;
    }
}

//to REVERSE NODES IN CIRCULAR LINKED LIST
void reverse_ll(node **head)
{
    node *temp = *head;
    if(*head == NULL )
    {
        return;
    }
    node *current = nullptr;
    node *t;
    // node *st;
    // while (temp->next != (*head))
    do
    {
        t  = current ;
        current = temp;
        temp=temp->next;
        current->next = t;
        // if(temp == *head )
        if(temp != *head && temp->next == *head)
        *head  =  current;
    }
    while (temp != *head);
    // st->next = *head; 
}
//DISPLAY FUNCTION TO PRINT LINKED LIST
// void display(node **head)
// {
//     node *temp = *head;
//     while (temp != *head)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

void display(node **head)
{
    node *temp = *head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while (temp != *head);
    cout << endl;
}

int main(){
    node *head = nullptr;
    // int arr[5] = {1,2,3,4,5};
    // create(arr , 5 , &head);

    insert(&head , 1 ,0);
    insert(&head , 2 ,1);
    display(&head);
    insert(&head , 3 ,2);
    insert(&head , 4 ,3);
    insert(&head , 5 ,7);
    display(&head);
    // del_node(&head , 0);
    // del_node(&head , 3);
    // del_node(&head , 2);
    reverse_ll(&head);
    cout << "reversing a linked list"<<endl;
    display(&head);
return 0;
}