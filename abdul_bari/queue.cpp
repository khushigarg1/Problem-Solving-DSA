#include<bits/stdc++.h>
using namespace std;
class queue1
{
    public :
        int size;
        int front;
        int rear;
        int *arr;
        queue1()
        {
            size = 10;
            arr = new int[size];
            front = rear = -1;
        }
        queue1(int size)
        {
            this->size = size;
            arr = new int[size];
            front = rear = -1;
        }
        void enqueue(int data)
        {
            if((rear + 1) == size)
            {
                cout << "queue is full "<<endl;
            }
            else if(rear == -1)
            {
                front = rear = 0;
                arr[rear] = data;
            }
            else{
                rear++;
                arr[rear] = data;
            }
        }

        int dequeue()
        {
            if(front == rear && front == -1){
                cout << "queue is empty"<<endl;
                return 0;
            }
            else{
                int temp = arr[front];
                if(front == rear)
                {
                    front = -1;
                    rear = -1;
                    return temp;
                }
                return (arr[front++]);
            }
        }

        void display()
        {
            // for (int i = front ; i != rear; i = (i+1)%size)
            for (int i = front ; i <= rear; i++)
            {
                cout << arr[i] <<" ";
            }
            cout << endl;
        }
};

class queue_circular
{
    public :
        int front , rear , *arr , size;
        queue_circular()
        {
            size = 10;
            front = rear = -1;
            arr = new int[size];
        }
        queue_circular(int s)
        {
            int size = s;
            front = rear = -1 ;
            arr = new int[s];
        }
        void enqueue(int data);
        int dqueue();
        void display();
};

void queue_circular :: enqueue(int data)
{
    if(front == (rear + 1)%size)
    {
        cout << "queue is fulll "<<endl;
    }
    else
    {
        if(front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else{
            rear = ((rear+1) % size);
            // arr[rear] = data;
        }
            arr[rear] = data;
    }
}

int queue_circular :: dqueue()
{
    if(front ==-1)
    {
        cout << "queue is empty "<<endl;
        return 0;
    }
    else
    {
        int x = arr[front];
        if(front == rear)
        {
            front = rear = -1;
        }
        else{
            front = (front + 1)%size;
        }
        return x;
    }
}

void queue_circular :: display()
{
    if(front == -1)
    {
        cout << "queue is empty " <<endl;
        return ;
    }
    //  if (rear >= front)
    // {
    //     for (int i = front; i <= rear; i++)
    //         cout << arr[i] <<" ";
    // }
    // else
    // {
    //     for (int i = front; i < size; i++)
    //         cout << arr[i] <<" ";
 
    //     for (int i = 0; i <= rear; i++)
    //         cout << arr[i] <<" ";
    // }
    for(int i = front ; i != rear; i = (i+1)%size)
    {
        cout << arr[i] << " ";
    }
    if(!(front == rear && front == -1))
        cout<<arr[rear];
    cout << endl;
}

int main(){
    // int size;
    // cout << "enter size"<< endl;
    // cin >> size;
    // // queue1 q1;
    // queue1 q1(size);
    // q1.enqueue(10);
    // q1.display();
    // q1.enqueue(20);
    // q1.display();
    // q1.enqueue(30);
    // q1.display();
    // q1.dequeue();
    // q1.display();
    // q1.dequeue();
    // q1.display();

    queue_circular q1;
    q1.enqueue(11);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    // q1.enqueue(6);
    // q1.enqueue(7);
    // q1.enqueue(8);
    q1.enqueue(9);
    q1.display();

    q1.dqueue();
    q1.dqueue();
    q1.dqueue();
    q1.dqueue();
    q1.dqueue();
    q1.dqueue();
    q1.dqueue();
    q1.dqueue();
    q1.display();
    q1.enqueue(4);
    q1.enqueue(4);
    q1.display();
return 0;
}