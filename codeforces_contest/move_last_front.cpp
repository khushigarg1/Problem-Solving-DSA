#include<bits/stdc++.h>
using namespace std;
#include "template_single_ll.cpp"
void moveee(node **head)
{
    node *prev = *head;
    node *temp = *head;
    // int dataa;
    while (temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }
    // dataa = temp->data;
    prev->next = nullptr;
    temp->next = *head;
    *head = temp;
}
int main(){
    node *head = nullptr;
    append(&head , 1);
    append(&head , 2);
    append(&head , 3);
    append(&head , 4);
    print(&head);
    moveee(&head);
    print(&head);
return 0;
}