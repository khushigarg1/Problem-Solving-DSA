#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};

int count_ll(node **head)
{
    node *temp = *head;
    int len = 0;
    if (temp == nullptr)
    {
        return 0;
    }
    do
    {
        len++;
        temp = temp->next;
    } while (temp != nullptr);
    return len + 1;
}

// INSERT AT ANY GIVEN  POSITION
void inserti(node **head, int key, int pos)
{
    int count = 0;
    node *temp = *head;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    newnode->prev = nullptr;

    if (pos < 0 || pos > count_ll(head))
    {
        cout << "invaldi index " << endl;
        return;
    }
    if (pos == 0)
    {
        if (temp == nullptr)
        {
            *head = newnode;
            newnode->next = *head;
            newnode->prev = *head;
            // temp = newnode;
            return;
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
    else
    {
        while (count < pos && temp->next != *head)
        {
            temp = temp->next;
            count++;
        }
        newnode->next = temp;
        temp->prev->next = newnode;
        temp->prev = newnode;
        newnode->prev = temp->prev;
        if (pos == 1 && pos == count_ll(head))
        {
            (*head)->prev = newnode;
        }
    }
}

// PRINT LINKED LIST
void display(node **head)
{
    node *temp = *head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != *head);
    cout << endl;
}

int main()
{
    node *head = nullptr;
    inserti(&head, 1, 0);
    display(&head);
    inserti(&head, 2, 1);
    // inserti(&head , 3 , 1);
    display(&head);
    return 0;
}