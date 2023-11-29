#include<bits/stdc++.h>
using namespace std;
#include "template_single_ll.cpp"

node *Merge_sort(node **first , node **second)
{
    node *temp1 = *first;
    node *temp2 = *second;
    node *merge_sortd = new node;
    node *temp = new node;
    merge_sortd = temp->next;
    while (temp1 != nullptr && temp2 != nullptr)
    {
        if(temp1->data >= temp2->data)
        {
            temp->next = temp2;
            temp2 = temp2->next;
        }
        else
        {
            temp->next =temp1;
            temp1 = temp1->next;
        }
        temp = temp->next;
    }

    while (first != nullptr)
    {
        temp->next = temp1;
        temp1 = temp1->next;
        temp = temp->next;
    }
    while ((second) != nullptr)
    {
        temp->next = temp2;
        temp2 = temp2 ->next;
        temp = temp->next;
    }
    return merge_sortd->next;
}

node *middle(node **head) {
    node *slow = *head;
    node *fast = (*head)->next;
    
    while(slow->next != NULL && (fast!=NULL && fast->next!=NULL)) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *Sort_ll(node **head)
{
    node *temp = *head;
    if(temp->next == nullptr)
    {
        return temp;
    }
    node *mid = new node;
    node *sec = new node;
    mid = middle(&temp);
    sec = mid->next;
    mid->next = nullptr;

    node * first = Sort_ll(&temp);
    node * second = Sort_ll(&sec);
    node *ans = Merge_sort( &first , &second);
    return ans;
}

int main(){
    node *head = nullptr;
    append(&head , 1);
    append(&head , 3);
    append(&head , 2);
    append(&head , 7);
    append(&head , 5);
    print(&head);
    Sort_ll(&head);
    print(&head);
return 0;
}