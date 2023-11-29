#include<bits/stdc++.h>
using namespace std;
class node
{
    public :
        int data ;
        node *next;
        node(int data)
        {
            this -> data = data;
            next = nullptr;
        }
};

void push(node** head, int data)
{
    node* newnode = new node(data);
    // *head = new_node;
}
void deletenode(node **head , int i )
{
    node *temp = *head;
    node* prev = nullptr;
    if(temp != nullptr && temp -> data == i)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    else 
    {
        while (temp != nullptr && temp->data != i)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == nullptr)
        {
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
}
void printList(node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{ 
    node* head = NULL;
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    printList(head);
    deletenode(&head, 1);
    printList(head);
    return 0;
}
