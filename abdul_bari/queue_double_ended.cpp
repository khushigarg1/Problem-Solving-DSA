/*
double ended queue means insertion adn deleetion can be done by both like frontorn ot rear both 
input restricted = inseertion can be done only frontrom rear and deletion frontorm both
output restricted = insertion can be done frontrom both and deletion can be done only frontrom frontront 
*/

#include<bits/stdc++.h>
using namespace std;
class queue1
{
    public :
        int size ;
        int front = -1;     //frontront
        int rear = -1;     //rear
        int *arr;
        queue1()
        {
            size = 5;
        }
        queue1(int size)
        {
            this->size = size;
        }
        void insert_frontr(int data);
        void insert_end(int data);
        int delete_front();
        int delete_end();
        void display()
        {
            if(front == -1 || rear == -1)
            {
                cout << "underflow" <<endl;
            }
            else{
                for (int i = front ; i != rear; i = (i+1)%size)
                {
                    cout << arr[i] <<endl;
                }
                cout << endl;
            }
        }
};

void queue1 :: insert_frontr(int data)
{
    if(front == -1 ){
        front == 0;
        arr[++rear] = data;
    }
    else if(front != 0)
    {
        arr[--front] = data;
    }
    else if (front == 0)
    {
        front = size -1;
    }
    else
    {
        cout << "overflow!!"<<endl;
    }
}

void queue1 :: insert_end(int data)
{
    if(rear >= size-1)
    {
        cout << "overflow"<<endl;
    }
    else if(rear == -1)
    {
        front++;
        arr[++rear] = data;
    }
    // else if (rear == size -1)
    // {
    //     rear =0;
    //     arr[rear] = data;
    // }
    else 
    {
        arr[++rear] = data;
    }
}

int queue1 :: delete_front()
{
    if(front == -1)
    {
        cout << "empty or underflow "<<endl;
        return 0;
    }
    else 
    {
        if(front == rear)
        {
            front = rear = -1;
            return 0;
        }
        else
        {
            // front++;
            int temp = arr[front];
            if(front == size -1)
            {
                front = 0;
                return temp;
            }
            else
            {
                front++;
                return temp;
            }
        }
    }
}

int queue1 :: delete_end()
{
    if(front == -1)
    {
       cout << "empty"<<endl; 
       return 0;
    }
    else{
        if(front == rear)
        {
            front = rear = -1;
            return arr[rear];
        }
        else if (rear == 0)
            return arr[rear = size-1];
        else{
            return (arr[rear--]);
        }
    }
}

int main(){
    cout << "enter 1 to insert at starting "<<endl;
    cout << "enter 2 to insert at end "<<endl;
    cout << "enter 3 to delete at starting "<<endl;
    cout << "enter 4 to delete at end "<<endl;

    // queue1 q2(5);
    // q2.insert_frontr(1);
    // q2.insert_frontr(1);
    // q2.display();
    int choice;
    cin >>choice;
    cout << endl;
    queue1 q1(5);
    switch (choice)
    {
    case 1:
        int data;
        cout << "enter the data"<<endl;
        cin >> data;
        q1.insert_frontr(data);
        q1.display();
        break;
    
    case 2:
        int key;
        cout << "enter the data"<<endl;
        cin >> key;
        q1.insert_end(key);
        q1.display();
        break;

    case 3:
        q1.delete_end();
        q1.display();
        break;

    case 4:
        q1.delete_front();
        q1.display();
        break;
    default:
        cout << "invalid choice "<<endl;
        break;
    }
return 0;
}