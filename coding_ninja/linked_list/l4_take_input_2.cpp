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
return 0;
}