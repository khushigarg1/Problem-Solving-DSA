#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int data;
        node *next;
        node *prev;
};
void insert_beginning(node **head , int key)
{
    node * temp = *head;
    node *newnode = new node;
    newnode-> data = key;
    newnode-> next = nullptr;
    newnode-> prev = nullptr;
    if(temp == nullptr)
    {
        *head = newnode;
        newnode-> next = *head ;
        newnode-> prev = newnode; 
    }
    else
    {
        while (temp-> next != *head)
        {
            temp = temp -> next;
        }
        temp-> next = newnode;
        newnode->prev = temp;
        newnode-> next = *head;
        (*head)-> prev = newnode;
        *head = newnode;
    }
}

void push_end(node **head , int key)      // insert at the position of i 
{
    node *temp = (*head)->prev;
    node *newnode = new node;
    newnode-> data = key;
    newnode-> next = nullptr;
    newnode-> prev = nullptr;
    if(temp == nullptr)
    {
        *head = newnode;
        newnode-> next = newnode ;
        newnode-> prev = newnode;    
    }
    else 
    {
        newnode-> next = *head;
        temp->next  = newnode;
        newnode-> prev = temp;
        (*head)->prev = newnode;
    }
}

void push_i(node **head , int key , int pos)
{
    node *temp = *head;
    node *newnode = new node;
    newnode-> data = key;
    newnode-> next = nullptr;
    newnode-> prev = nullptr;
    int count = 0;
    if(temp == nullptr && pos==0)
    {
        *head = newnode;
        newnode-> next = newnode; 
        newnode-> prev = newnode;
    }
    else
    {
        while(count < pos  && temp->next != *head)
        {
            temp = temp-> next;
            count++;
        }
        newnode -> next = temp;
        newnode -> prev = temp -> prev;
        temp -> prev -> next = newnode;
        temp -> prev = newnode;
        if(pos == 0 )
        {
            *head = newnode;
        }
    }
}

void delete_Node(node** head,int i){
    node* temp = *head;
    int count =0;
    if (i == 0)
    {
        temp -> next ->prev = temp ->prev;
        temp ->prev ->next = temp -> next;
        if (temp->next == temp)
        {
            (*head) = nullptr;
        }
        else (*head) = temp -> next;
        delete [] temp;     
    }
    else{
        while (count < i && temp ->next != (*head))
        {
            temp = temp-> next;
            count++;
        }
        // cout<<"Value of i is : "<<i<<endl;
        if (count == i)
        {
            temp -> next -> prev = temp -> prev;
            temp -> prev -> next = temp -> next;
            delete [] temp;
        }
        else cout<<"Invalid index!! \n";
    }
}

// void delet_node(node **)
void display(node **head)
{
    node *temp = *head;
    cout << temp -> data << " ";
    temp = temp-> next;
    while(temp != *head)
    {
        cout << temp->data << " ";
        temp = temp-> next;
    }
    cout << endl;

}
int main(){
    node *head = nullptr;
    insert_beginning(&head , 1);
    insert_beginning(&head , 2);
    insert_beginning(&head , 3);
    display( &head);

    push_end(&head , 7);
    push_end(&head , 8);
    display(& head);

    push_i(&head , 4 , 1);
    display( &head);

    push_i(&head , 9 , 0);
    display( &head);
    
    push_i(&head , 5 , 2);
    display(&head);

    delete_Node(&head , 2);
    display(&head);
    
    delete_Node(&head , 6);
    display(&head);

    delete_Node(&head , 0);
    display(&head);
return 0;
}