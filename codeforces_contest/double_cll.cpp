#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
        node *next;
        int data;
        node *prev;
};

void insert_beginning(node **head , int key)
{
    node *temp = *head;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    newnode->prev = nullptr;
    if(temp == nullptr)
    {
        *head = newnode;
        newnode-> next = *head;
        newnode-> prev = newnode;
    }
    else
    {
        newnode->next = *head;
        newnode->prev = (*head)->prev;
        (*head)->prev->next = newnode;
        (*head)->prev = newnode;
        *head = newnode;
    }
}

void insert_end(node **head , int key)
{
    node *temp = *head;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    newnode->prev = nullptr;
    if(temp == nullptr)
    {
        *head = newnode;
        newnode->next = newnode;
        newnode->prev = newnode;
    }
    else
    {
        (*head)->prev->next = newnode;
        newnode->prev = (*head)->prev->next;
        newnode->next = *head;
        (*head)->prev = newnode;
    }
}

void insert_i(node **head , int key , int pos)
{
    node *temp = *head;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    newnode->prev = nullptr;
    int count = 0;
    if(temp == nullptr && pos==0)
    {
        *head = newnode;
        newnode-> next = newnode;
        newnode->prev = newnode;
    }
    else
    {
        // while(count < pos-1 && temp->next != *head)
        // {
        //     temp = temp->next;
        //     count++;
        // }
        // newnode->next = temp ->next;
        // temp->next->prev = newnode;
        // newnode->prev = temp;
        // temp ->next = newnode;

        while(count < pos && temp-> next != *head)
        {
            temp = temp ->next;
            count ++;
        }
        if(pos > count)
        {
            cout<< "invalid position"<<endl;
            return;
        }
        newnode-> next = temp;
        newnode->prev = temp->prev;
        temp->prev->next = newnode;
        temp->prev = newnode;
        if(pos==0)
        {
            *head = newnode;
        }
    }
}

void deletion_i(node **head ,  int pos)
{
    node*temp = *head;
    int count = 0;
    if(temp == nullptr )
    {
        cout << "linked list is not available to delete ll";
    }
    else
    {
        while (temp->next != *head && count < pos)
        {
            temp = temp ->next;
            count ++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        if(pos == 0)
        {
            *head = temp->next;
        }
        delete [] temp;
    }
}
void display(node **head)
{
    node *temp = *head;
    do
    {
        cout << temp->data <<" ";
        temp = temp->next;
    } while (temp != *head);
    cout << endl;
}

int main(){
    node *head = nullptr;
    insert_beginning(&head , 5);
    insert_beginning(&head , 6);
    insert_beginning(&head , 4);
    display(&head);
    insert_end(&head , 7);
    insert_end(&head , 8);
    display(&head);

    insert_i(&head , 9 , 2);
    insert_i(&head , 0 , 0);
    display(&head);

    deletion_i(&head , 1);
    display(&head);

    deletion_i(&head , 0);
    display(&head);

    int n ;
    cin >> n;
    switch (n)
    {
    case 1:
        insert_beginning(&head , 0);
        break;
    case 2:
        insert_end(&head , 2);
        break;
    case 3:
        insert_i(&head , 3 , 2);
        break;
    case 4 :
        deletion_i(&head ,2);
        break;

    default:
        cout << "invalid case";
        break;
    }
    display(&head);
    return 0;
}