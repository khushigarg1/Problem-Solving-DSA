#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
};

int count_ll(node **head)
{
    int count =0;
    node *temp = *head;
    while (temp != nullptr)
    {
        count ++;
        temp = temp->next;
    }
    return count;
}

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

void middle_ll(node **head )
{
    node *temp = *head;
    node *p = *head;
    node *q = *head;
    // while(q)
    while (q->next !=  nullptr )
    {
        q = q->next;
        if(q->next != nullptr)
        {    
            q = q->next;
            p = p->next;
        }
    }
    cout << "middle linked list element is " << p->data ;
    cout << endl;
}

void middle_i(node **head)
{
    node *temp =  *head;
    int a = count_ll(head);
    int n;
    if(a%2 ==0)
    {
        n = a/2;
    }
    else
    {
        n = (a-1)/2;
    }
    // cout << n;
    int count =0;
    while(count != n)
    {
        temp = temp->next;
        count++;
    }
    cout << temp->data;
}
void display(node **head)
{
    node *temp = *head;
    while (temp != nullptr)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}
int main(){
    node *head = nullptr;
    inseert_i(&head , 1 , 0);
    inseert_i(&head , 2 , 1);
    inseert_i(&head , 3 , 2);
    inseert_i(&head , 4 , 3);
    inseert_i(&head , 5 , 4);
    inseert_i(&head , 5 , 4);
    // inseert_i(&head , 5 , 4);
    // inseert_i(&head , 5 , 4);
    display(&head);
    middle_ll(&head);
    middle_i(&head);
return 0;
}