#include<bits/stdc++.h>
using namespace std;
#include "template_single_ll.cpp"

void swap(node **head , int ind)
{
    node *temp = *head;
    node *prev = nullptr;
    node *last = *head;
    int count =0;
    if(ind == (count_ll(head) -1))
    {
        cout << "not possible try again "<<endl;
        return ;
    }
    else if(ind == 0)
    {
        last = (*head)->next->next;
        prev = (*head)->next;
        prev->next = (*head);
        (*head)->next = last;
        *head= prev;
    }
    else{
        while (count < ind)
        {
            prev = temp;
            temp = temp->next;
            last = temp->next;
            count++;
        }
        temp->next = last->next;
        last->next = temp;
        prev->next = last;
    }
}

void swap_2(node **head , int ind1 , int ind2)
{
    node *temp = *head;
    node *prev_ind1 = nullptr;
    node *prev_ind2 = nullptr;
    node *last = *head;
    int count1 =0;   int count2 =0;
    if(ind1 ==0 || ind2 ==0 )
    {
        if(ind1 == 0)
        {
            while (count2 < ind2)
            {
                prev_ind2 = last;
                last = last->next;
                count2++;
            }
            // *head = last;
            prev_ind1 = temp->next;
            (*head) = last;
            temp->next = prev_ind2->next->next;
            last->next = prev_ind1;
            prev_ind2->next = temp;
        }
        else
        {
            while (count1 < ind1)
            {
                prev_ind1 = temp;
                temp =temp->next;
                count1++;
            }
            prev_ind2 = last->next;
            (*head) = temp;
            last->next = prev_ind1->next->next;
            temp->next = prev_ind2;
            prev_ind1->next = last;
        }
    }
    else if( ind1 == (ind2+1) || ind2 == (ind1 +1))
    {
        if(ind2 > ind1)
            swap(head , ind1);
        else
            swap(head , ind2);
    }
    else{
        while (count1 < ind1)
        {
            prev_ind1 = temp;
            temp =temp->next;
            count1++;
        }
        while (count2 < ind2)
        {
            prev_ind2 = last;
            last = last->next;
            count2++;
        }
        prev_ind1->next = last;
        temp->next = last->next;
        last->next = temp->next;
        prev_ind2->next = temp;
        last->next = prev_ind2;
    // temp->next = last->next;
    }
}

node* reverse_pair(node **head , int i)
{
   node *temp = *head;
   node *prev = nullptr;
   node *nextt = nullptr;
   int count =0;
   if(*head == nullptr)
   {
       return 0;
   }
   while (temp != nullptr && count < i)
   {
       nextt = temp->next;
       temp->next = prev;
       prev = temp;
       temp = nextt;
       count++;
   }
   if(nextt != nullptr)
   {
       (*head)->next = reverse_pair(&nextt , i);
   }
   return prev;
   //prev is new head of the list
}

int main(){
    node *head = nullptr;
    append(&head , 0);
    append(&head , 2);
    append(&head , 4);
    append(&head , 6);
    append(&head , 8);
    print(&head);
    reverse_pair(&head , 3);
    print(&head);
return 0;
}