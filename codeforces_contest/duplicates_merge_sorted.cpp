#include<bits/stdc++.h>
using namespace std;
#include "template_single_ll.cpp"

void duplicates_sorted(node **head)
{
    node *last = *head;
    node *p = last->next;
    while (p != nullptr)
    {
        if(last->data != p->data )
        {
            last= p;
            p = p->next;
        }
        else
        {
            last->next = p->next;
            delete [] p;
            p = last->next;
        }
    }  
}
// Node *removeDuplicates(Node *head)
// {
//  // your code goes here
//     struct Node* temp =head;
//     struct Node* curr ;
//     if(temp == NULL)
//     {
//         return NULL;
//     }
//     while(temp->next!= NULL)
//     {
//         if(temp->data == temp->next->data)
//         {
//             curr = temp->next;
//             temp->next = temp->next->next;
//             delete [] curr;
//         }
//         else
//         {
//             temp = temp->next;
//         }
//     }
//     return head;
// }
void mergee(node **head , node **second)
{
    node *first = *head;
    node *sec = *second;
    node *last= nullptr;
    if(first->data > sec->data )
    {
        *head= *second;
        last = *second;
        sec= sec->next;
    }
    else{
        last = *head;
        first = first->next;
    }
    while (first != nullptr && sec != nullptr)
    {
        if(first->data > sec->data){
            last->next = sec;
            last = sec;
            sec = sec->next;
        }
        else{
            last->next = first;
            last = first;
            first = first->next;
        }
    }
    if(first != nullptr)
        last->next = first;
    else{
        last->next = sec;
    }
    *second = *head;
}

int main(){
    node *head = nullptr;
    // int a;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << "enter element :- ";
    //     cin >> a;
    //     insert_begin(&head , a);
    // }
    insert_begin(&head , 7);
    insert_begin(&head , 3);
    insert_begin(&head , 3);
    insert_begin(&head , 1);
    node *second = nullptr;
    insert_begin(&second , 8);
    insert_begin(&second , 7);
    insert_begin(&second , 4);
    insert_begin(&second , 2);
    print(&head);
    print(&second);

    // duplicates_sorted(&head);
    mergee(&head , &second);
    print(&head);
return 0;
}