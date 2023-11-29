#include<bits/stdc++.h>
using namespace std;
#include"1_node.cpp"

node *takeinput_better()
{
    int data ;
    cin >> data;
    node *head = nullptr;
    node *tail = nullptr;
    while (data != -1)
    {
    node *newnode = new node(data);
        if(head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail -> next = newnode;
            tail = tail-> next;
            // or
            // tsil = newnode;
        }
        cin >> data;
    }
    return head;
    // here complexity will b eo of n  o(n) bcoz isme loop m eja kr figure out nh krna pdh rha so this method i more btter than before for every node hume search krnanhi pdh rha ki tail ko kha kisme kya rkhe overall node m econstant work kr rhe hai loop travel krne ke ly eloop m etravel nhi krnma pdh rha
}
node* insertnode(node *head , int i , int data)
{
    node *newnode = new node(data);
    int count = 0;
    node *temp = head;
    if(i==0)
    {
        newnode -> next = head;
        head = newnode;
        return head;
    }
    while(temp != nullptr && count < i)
    {
        temp = temp-> next;
        count++;
    }

    while (temp != nullptr)
    {
        node *a = temp -> next;
        temp -> next = newnode;
        newnode -> next = a;
    }
    return head;
}

void append(node** head_ref , int new_data)
{
    node* newnode = new node(new_data);
    node * temp = *head_ref;
    newnode -> data = new_data;
    newnode -> next = nullptr;
    if(* head_ref != nullptr)
    {
        *head_ref = newnode;
        return;
    }
    while (temp -> next != nullptr)
    {
        /* code */
        temp = temp -> next;
    }
    temp-> next = newnode;
    return;
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head -> data << " ";
        head = head -> next;
    }
}
int main(){
    node *head = takeinput_better();
    print(head);
    int i , data;
    cin >> i >> data;
    head = insertnode(head , i , data);
    print(head);
    append(&head , 6);
    print(head);
    append(&head , 7);
    print(head);
return 0;
}