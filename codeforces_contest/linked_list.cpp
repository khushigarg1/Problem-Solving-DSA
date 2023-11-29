#include<iostream>
using namespace std;

class node
{
    public :
        int data ;
        node *next;     //declaring a pointer to a class
};
void append(int key , node **head)
{
    node *temp = *head;
    node *newnode = new node;
    newnode -> data = key;
    newnode -> next = nullptr;
    if (temp == nullptr)
    {
        *head = newnode;
    }
    else
    {
        while(temp-> next != nullptr)
        {
            temp = temp->next;
        }
        temp -> next = newnode;
    }
}

void push_beginning(node **head , int key)
{
    node *temp = *head;
    node *newnode = new node;
    newnode-> data = key;
    if(temp == nullptr)
    {
        *head = newnode;
        newnode-> next = nullptr;
    }
    else{
        newnode -> next = temp;
        *head = newnode;
    }
}

void push_i(node **head , int key , int i )
{
    node *temp = *head;
    int count = 0;
    node* newnode =new node;
    newnode -> data = key;
    newnode ->next = nullptr;
    if(i == 0)
    {
        *head = newnode;
    }
    else
    {
    while(count < i-1 && temp != nullptr)
    {
        temp = temp-> next;
        count ++;
    }
        newnode -> next = temp -> next;
        temp -> next = newnode;
    }
}
void print(node ** head)
{
    node *temp = *head;
    while (temp != nullptr)
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}
int main()
{
    node* head = nullptr;
    append(1,  &head);
    append(2,  &head);
    append(3,  &head);
    push_beginning(&head , 0);
    print(&head);

    cout << endl;
    // push_i(&head , 6 , 2);
    push_i(&head , 6 , 4);
    print(& head);
    push_i(&head , 6 , 0);
    print(& head);
    return 0;
}