#include<bits/stdc++.h>
using namespace std;

class node{
    public :
        int data;
        node *next;
};

void push(node **head , int key)
{
    node *newnode = new node;
    newnode-> data = key;
    newnode-> next = nullptr;
    if(*head == nullptr)
    {
        *head = newnode;
    }
    else
    {
        newnode ->next = *head;
        *head = newnode;
    }
}

int pop(node **head)
{
    node *temp = *head;
    if(*head == nullptr)
    {
        cout << "stack is empty"<<endl;
        return INT_MIN;
    }
    else
    {
        int x = temp->data;
        *head = temp->next;
        delete [] temp;
        return x;
    }
}

bool is_empty1(node **head)
{
    // if(*head == nullptr)
    // {
    //     // cout << "sorry stack is empty hehheheeeeeee"<<endl;
    //     return 1;
    // }
    // else
    //     return 0;
        return (*head == nullptr);
}

int is_fully(node **head)
{
    node *temp = new node;
    if(temp == nullptr)
    {
        delete [] temp;
        return 1;
    }
    else{
        delete [] temp;
        return 0;
    }
}

int peek(node *head)
{
    node *temp = head;
    return (temp->data);
}

void display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    node *top = nullptr;
    push(&top , 1);
    push(&top , 2);
    push(&top , 3);
    push(&top , 4);
    display(top);

    pop(&top);
    // pop(&top);
    // pop(&top);
    // pop(&top);
    display(top);

    cout << is_empty1(&top);
    cout <<endl;
    cout << is_fully(&top);
    cout <<endl;
    cout << peek(top);
    return 0;
}