#include<bits/stdc++.h>
using namespace std;

class node
{
    public :
        int data;
        node *next;
        node(){}
        node(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
};

int count_ll(node **head)
{
    node *temp = *head;
    int count =0;
    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void insert_ll(node **head , int data , int pos)
{
    int count = 0;
    node *temp = *head;
    node *newnode = new node(data);
    if(pos == 0)
    {
        newnode->next = (*head);
        *head = newnode;
    }
    else{
        while (count < (pos - 1))
        {
            temp = temp->next;
            count++;
        }
        // cout << temp->data <<endl;
        if(pos == 1)
        {
            newnode->next = (*head)->next;
            (*head)->next = newnode;
        }
        else{
            newnode ->next = temp->next;
            temp->next = newnode;
        }
    }
}


void pallindrome(node **head)
{
    int size_ll = count_ll(head);
    node *temp =  *head;
    // node *last = *head;
    int x = size_ll;
    
    int s=0;
    while (s <= size_ll/2)
    {
        int count = 0;
        node *last = *head;
        while (count < (x-1))
        {
            last = last->next;
            count++;
        }
        
        if(temp->data != last->data)
        {
            cout << "linked list is not a pallindrome"<<endl;
            return ;
        }
        // cout << temp->data << " "<<last->data <<endl;
        temp = temp->next;
        x--;
        s++;
    }
    cout << "linked list is a pallindrome "<<endl;
}

void display(node **head)
{
    node *temp = *head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    // cout << count_ll(head)<<endl;
}

int main(){
    node *head = nullptr;
    insert_ll(&head , 1 , 0);
    insert_ll(&head , 2 , 1);
    display(&head);
    insert_ll(&head , 3 , 2);
    insert_ll(&head , 2 , 3);
    insert_ll(&head , 1 , 4);
    display(&head);
    pallindrome(&head);
return 0;
}