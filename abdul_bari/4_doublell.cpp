#include<bits/stdc++.h>
using namespace std;
class node
{
    public :
        int data ;
        node *next;
        node *prev;
};

//COUNT LINKED LIST NODES
int count_ll(node **head)        
{
    node *temp = *head;
    int len =0;
    if(temp == nullptr)
    {
        return 0;
    }
    do
    {
        len++;
        temp = temp->next;
    }
    while (temp != nullptr);
    return len+1;
}

//INSERT AT ANY GIVEN POSITION
void insert_i(node **head , int key , int pos)
{
    node *temp= *head;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    newnode->prev = nullptr;
    if(pos < 0 || pos > count_ll(head))
    {
        cout << "invalid index"<<endl;
        return ;
    }
    if(*head == nullptr)          //EMPTY LINKED LIST
    {
        *head = newnode;
        return;
    }
    if(pos == 0)                //INSERTING AT BEGINNING
    {
        newnode-> next = *head;
        (*head)->prev = newnode;
        *head = newnode;
    }
    else             //INSERTING AT MIDDLE POSITION
    {
        for (int i = 0; i < pos-1; i++)     
        {
            temp= temp->next;
        }
        if(temp->next == nullptr)           //INSERTING AT THE END
        {
            newnode->next = nullptr;
        }
        else
        {
        newnode->next = temp->next;
        temp->next->prev= newnode;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

//TO DELETE NODE AT ANY GIVEN POSITION
void deletenode(node **head , int pos)
{
    node *temp = *head;
    if(pos < 0 || pos > count_ll(head))
    {
        cout << "invalid index"<<endl;
        return ;
    }
    if(*head == nullptr)
    {
        cout << "linked list is empty"<<endl;
        return;
    }
    if(pos==0)       //TO DELETE AT BEGINNING
    {
        if(temp->next == nullptr)   //IF LINKED LIST HAVE ONLY ONE NODE
        {
            *head = nullptr;
        }
        *head = temp->next;
        temp->next->prev = nullptr;
        delete [] temp;
    }
    else             //TO DELETE AT MIDDLTE PSITION AND LAST
    {
        for (int i = 0; i < pos; i++)
        {
            temp = temp-> next;
        }
        if(temp->next == nullptr)    //TO DELETE AT END
        {
            temp->prev->next = nullptr;
        }
        else{
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        }
        delete [] temp;
    }
}

//REVERSELINKED LIST
void reversell(node **head)
{
    node *temp = *head;
    node *p;
    while (temp != nullptr)
    {
        // p = temp;
        // temp = temp->next;
        // temp->prev = temp->next;
        // temp->next = p;
        
        p = temp->next;
        temp->next = temp->prev;
        temp->prev = p;
        temp = p;
        if(temp != nullptr && temp->next == nullptr)
            *head = temp;
    }
}

//PRINT LINKED LIST
void display(node **head)
{
    node *temp = *head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//MAIN FUNCTION
int main(){
    node *head = nullptr;
    insert_i(&head , 1 , 0);
    insert_i(&head , 2 , 1);
    insert_i(&head , 3 , 1);
    insert_i(&head , 4 , 2);
    insert_i(&head , 4 , 7);
    insert_i(&head , 5 , 4);
    display(&head);
    // deletenode(&head , 1);
    // deletenode(&head , 4);
    // display(&head);
    // deletenode(&head , 0);
    reversell(&head);
    display(&head);
return 0;
}