#include<bits/stdc++.h>
using namespace std;
class queuenode
{
    public :
        int data ;
        queuenode *next ;
        queuenode(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
};

void enqueue(queuenode **front , queuenode **rear , int data)
{
    queuenode *temp = *front;
    queuenode *newnode = new queuenode(data);
    if(newnode == nullptr)
    {
        cout << "queue is full"<<endl;
    }
    else
    {
        if(*front == nullptr)
        {
            *front = *rear = newnode;
        }
        else{
            (*rear)->next = newnode;
            *rear = newnode;
        }
    }
}

int dequeue(queuenode **front , queuenode **rear)
{
    if(*front == nullptr)
    {
        cout << "queue is emptyy "<<endl;
        return 0;
    }
    else{
        queuenode *p = *front;
        (*front) = (*front)->next;
        int x = p->data;
        delete [] p;
        return x;
    }
}

void display(queuenode **front )
{
    queuenode *temp = *front;
    while(temp)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    queuenode *front = nullptr;
    queuenode *rear = nullptr;
    enqueue(&front ,&rear , 1);
    enqueue(&front ,&rear , 2);
    enqueue(&front ,&rear , 3);
    enqueue(&front ,&rear , 4);
    display(&front);
    dequeue(&front , &rear);
    dequeue(&front , &rear);
    display(&front);
    enqueue(&front ,&rear , 2);
    enqueue(&front ,&rear , 3);
    enqueue(&front ,&rear , 4);
    display(&front);
return 0;
}