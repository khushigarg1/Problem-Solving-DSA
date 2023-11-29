// #include<bits/stdc++.h>
// using namespace std;
// class Queue{
//     int size;
//     int rear;
//     int front;
//     int *arr;
//     public:
//     Queue(){
//         size = 10;
//         rear = -1;
//         front = -1;
//         arr = new int[size];
//     }
//     Queue(int size){
//         this -> size = size;
//         rear = -1;
//         front = -1;
//         arr = new int[size];
//     }
//     void enQueue(int element){
//         if (rear != size - 1)
//         {
//             arr[++rear] = element;
//         }
//         else cout<<"Queue Overflow!!!\n";
//     }
//     int deQueue(){
//         if (front == rear)
//         {
//             cout<<"Queue Underflow!!!\n";
//             return -1;
//         }
//         else{
//             return arr[++front];
//         }
//     }
//     void displayQueue(){
//         for (int i = front + 1; i <= rear ; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Queue q(4);
//     q.enQueue(4);
//     q.enQueue(3);
//     q.enQueue(2);
//     q.enQueue(1);

//     q.displayQueue();
//     cout<<q.deQueue()<<endl;
//     q.displayQueue();    
// return 0;
// }

//------------------------Circular Queue-----------------------

// #include<bits/stdc++.h>
// using namespace std;
// class QueueLinear{
//     int *arr;
//     int size;
//     int rear;
//     int front;
//     public:
//     QueueLinear(){
//         size = 10;
//         arr = new int[size];
//         front = rear = 0;
//     }
//     QueueLinear(int _size){
//         size = _size;
//         arr = new int[size];
//         front = rear = 0;
//     }
//     void enQueue(int data){
//         if (rear + 1 == size)
//         {
//             cout<<"Queue is full\n";
//         }
//         else{
//             rear++;
//             arr[rear] = data;
//         }
//     }
//     int deQueue(){
//         if (front == rear){
//             cout<<"Queue is Empty!!!\n";
//         }
//         else{
//             return arr[front++];
//         }
//     }
//     void display(){
//         for (int i = front; i <= rear; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// class QueueCircular{
//     int rear, front , size, *arr;
//     public:
//     QueueCircular(){
//         int size = 10;
//         front = rear = -1;
//         arr = new int[size];
//     }
//     QueueCircular(int _size){
//         size = _size;
//         front = rear = -1;
//         arr = new int[size];
//     }
//     void enQueue(int data){
//         if ((rear + 1) % size == front)
//         {
//             cout<<"Queue is full noobdi!!!\n";
//         }
//         else{
//             rear = ( rear + 1) % size ;
//             arr[rear] = data;
//         }
//     }
//     int deQueue(){
//         if(front == rear){
//             cout<<"Queue is Empty noobdi!!!\n";
//             return 0;
//         }
//         else {
//             front = (front + 1) % size;
//             return arr[front];
//         }
//     }
//     void display(){
//         for (int i = front ; i != rear; i = (i + 1) % size)
//         {
//             cout<<arr[i + 1]<<" ";
//         }
//         cout<<endl;      
//     }
// };

// int main(){
//     QueueCircular q;
//     q.enQueue(1);
//     q.enQueue(2);
//     q.enQueue(3);
//     q.enQueue(4);
//     q.enQueue(5);
//     q.display();
//     cout<<q.deQueue()<<endl;
//     cout<<q.deQueue()<<endl;
//     cout<<q.deQueue()<<endl;
//     q.display();
//     q.enQueue(1);
//     q.enQueue(2);
//     q.enQueue(3);
//     q.display(); 
// return 0;
// // }


// class qCircular{
//     public:
//     int qsize;
//     int rear;
//     int front;
//     int *arr;
//     qCircular(){
//         qsize = 10;
//         front = -1;
//         rear = -1;
//         arr = new int[10];
//         cout<<"Size : "<<qsize<<endl;
//         cout<<"Arr : "<<sizeof(arr)<<endl;
//     }
//     qCircular(int n){
//         qsize = n;
//         front = -1;
//         rear = -1;
//         arr = new int[n];
//     }
//     void enQueue(int data){
//         if (((rear + 1) % qsize) == front )
//         {
//             cout<<"Queue is full"<<endl;
//         }
//         else{
//             if (front == -1 && rear == -1)
//             {
//                 front = rear = 0;
//                 arr[rear] = data;
//             }
//             else{
//                 rear = (rear + 1)% qsize;
//                 arr[rear] = data;
//             }
//         }
//     }
//     int deQueue(){
//         if (rear == front && front == -1)
//         {
//             cout<<"Queue is empty"<<endl;
//             return 0;
//         }
//         else{
//             int x = arr[front];
//             if (rear == front)
//             {
//                 front = rear = -1;
//             }
//             else{
//                 front++;
//             }
//             return x;
//         }
//     }
//     void display(){
//         for (int i = front; i != rear; i = (i+1) % qsize)
//         {
//             cout<<arr[i]<<" ";
//         }
//         if(!(front == rear && front == -1))
//         cout<<arr[rear];
//         cout<<endl;
//     }
// };

// int main(){
//     qCircular q;
//     cout << q.qsize<<endl;
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
//     q.enQueue(1);
    
//     q.display();
//     cout<<q.deQueue()<<endl;
//     cout<<q.deQueue()<<endl;
//     cout<<q.deQueue()<<endl;
//     q.display();
//     q.enQueue(1);
//     q.enQueue(2);
//     q.enQueue(3);
//     q.enQueue(3);
//     q.display();   
// return 0;
// }

#include <iostream>
using namespace std;

class Stack
{
    int *data;
    int rear;
    int capacity;
    int size;

public:
    int front;
    Stack(int s)
    {
        data = new int[s];
        front = -1;
        rear = 0;
        capacity = s;
        size = 0;
    }

    bool isEmpty()
    {
        return size == 0;
    }
    int getSize()
    {
        return size;
    }
    void enqueue(int element)
    {
        if (size == capacity)
        {
            int *newData = new int[capacity * 2];
            int j = 0;
            for (int i = front; i < capacity; i++)
            {
                newData[j] = data[i];
                j++;
            }
            for (int i = 0; i < front; i++)
            {
                newData[j] = data[i];
            }
            delete[] data;
            data = newData;
            front = 0;
            rear = capacity;
            capacity *= 2;
        }
        data[rear] = element;
        rear = (rear + 1) % capacity;
        if (front == -1)
        {
            front++;
        }
        size++;
    }

    int getFront()
    {
        cout << front <<endl;
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return 0;
        }
        return data[front];
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty! ";
            return 0;
        }

        int value = data[front];
        front = (front + 1) % capacity;
        size--;
        if (size == 0)
        {
            front = -1;
            rear = 0;
        }

        return value;
    }

    void display()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << data[front] << " ";
            // front = (front + 1) % capacity;
        }
        cout << endl;
    }
};

int main()
{
    Stack s(5);
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.enqueue(40);
    s.enqueue(50);
    s.enqueue(60); // queue is full
    s.display(); // 10 20 30 40 50

    cout << s.getFront() << endl; // 10
    cout << s.dequeue() << endl;  // 10
    cout << s.dequeue() << endl;  // 20
    cout << s.dequeue() << endl;  // 30
    cout << s.getSize() << endl; // 2
    cout << s.dequeue() << endl; // 40
    cout << s.dequeue() << endl; // 50
    cout << s.dequeue() << endl; // queue is empty
    // cout << s.dequeue() << endl; // 50
    // cout << s.dequeue() << endl; // 50
    // cout << s.dequeue() << endl; // 50
    // cout << s.dequeue() << endl; // 50
    // cout << s.dequeue() << endl; // 50
    // cout << s.dequeue() << endl; // 50
    // cout << s.dequeue() << endl; // 50

    return 0;
}