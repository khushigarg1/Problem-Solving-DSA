#include<bits/stdc++.h>
using namespace std;
// #include "template_single_ll.cpp"

class node{
    public :
        int data ;
        node *next;
        int flag;
};

void push(node **head , int data)
{
    node *newnode = new node;
    newnode->data = data;
    newnode->flag = 0;
    //inserting at the beginning
    newnode->next = *head;   //linking old ll
    *head = newnode;       //pointing *head on newnode 
}

//if there is a loop in a linked list then return true else false
bool detect_loop(node **head )
{
    node *temp = *head;   //temp pointer for traversing
    while (temp->next != nullptr)
    {
        if(temp->flag == 1)  //if its flag already 1 it means thereis a loop
        {
            return true;
        }
        temp->flag = 1;   //mark its flag = 1 (first time node)
        temp = temp->next;
    }
    return false;
}

int delete_loop(node **head)
{
    int x;
    node *temp = *head;
    while (temp->next != nullptr)
    {
        if(temp->next->flag == 0)
        {
            x = temp->data;
            temp->next = nullptr;
        }
        temp->flag  = 0;
        temp = temp->next;
    }
    return x;
}

//FLOYD'S ALGO OPTIMISED
// void removeLoop(Node* head)
//     {
//         // code here
//         // just remove the loop without losing any nodes
//         struct Node *slow= head;
//         struct Node *fast = head;
//         slow=slow->next;
//         fast = fast->next->next;
//         while(slow && fast && fast->next)
//         {
//             if(slow == fast)
//             {
//                 break;
//             }
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         if(slow == fast)
//         {
//             slow = head;
//             if(slow== fast)
//             {
//                 while(fast->next != slow)
//                 {
//                     fast = fast->next;
//                 }
//             }
//             else
//             {
//                 while(fast->next != slow->next)
//                 {
//                     slow = slow->next;
//                     fast = fast->next;
//                 }
//             }
//         }
//         fast->next = nullptr;
//     }

void display(node **head)
{
    node *temp = *head;
    while (temp != nullptr)
    {
        // if(temp->flag == 0)
        // {
        //     return;
        // }
        cout << temp->data <<" ";
        // temp->flag =0;
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    node *head = nullptr;
    // int data;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << "enter the newdata :- ";
    //     cin >> data;
    //     push(&head , data);
    // }
    push(&head , 1);
    push(&head , 2);
    push(&head , 3);
    push(&head , 4);
    push(&head , 5);
    display(&head);
    head->next->next->next->next->next = head->next;
    if(detect_loop(&head))
        cout << "loop found ";
    else
        cout << "no loopppp ";
    cout << endl;
    cout << delete_loop(&head);
return 0;
}