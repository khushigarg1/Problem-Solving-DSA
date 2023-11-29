#include<bits/stdc++.h>
using namespace std;

// class Queue{
//     public :
//         stack <int> s1;
//         stack <int> s2;
//         Queue(){}
// //  when enqueue is costly
//         // void enqueue(int x)                                             
//         // {
//         //     while(!s1.empty())
//         //     {
//         //         s2.push(s1.top());
//         //         s1.pop();
//         //     }
//         //     s1.push(x);
//         //     while(!s2.empty())
//         //     {
//         //         s1.push(s2.top());
//         //         s2.pop();
//         //     }
//         // }
//         // int dequeue()
//         // {
//         //     if(s1.empty())
//         //     {
//         //         return -1;
//         //     }
//         //     int a = s1.top();
//         //     s1.pop();
//         //     return x;
//         // }

// // WHEN DEQUEUE IS COSTLY
//         void enqueue(int x)
//         {
//             s1.push(x);
//         }
//         int dequeue()
//         {
//             if(s1.empty() && s2.empty())
//             {
//                 return -1;
//             }
//             while(!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//             int temp = s2.top();
//             s2.pop();
//             return temp;
//         }
// };


//------------------------------PRIORITY QUEUE---------------------------------
class Queue
{
    public :
        int value;
        int priority;
        int size = -1;
        void enqueue(int value, int priority);
        int top();
        int dequeue();
        // Queue pr[10000];
};
Queue pr[1000];
void Queue :: enqueue(int value , int priority)
{
    size++;
    pr[size].value = value;
    pr[size].priority = priority;
}

int Queue:: top()
{
    int highestpriority = INT_MIN;
    int ind = -1;
    for(int i = 0 ; i <= size ; i++)
    {
        if(highestpriority < pr[i].priority)
        {
            highestpriority = pr[i].priority;
            ind = i;
        }
    }
    return ind;
}

int Queue :: dequeue()
{
    int temp = top();
    for(int i = temp ; i < size ; i++)
    {
        pr[i] = pr[i+1];
    }
    size --;
    return temp;
}
int main(){
    // Queue q;
    // q.enqueue(1);
    // q.enqueue(2);
    // q.enqueue(3);
 
    // cout << q.dequeue() << '\n';
    // cout << q.dequeue() << '\n';
    // cout << q.dequeue() << '\n';

    Queue q;
    q.enqueue(10 , 2);
    q.enqueue(14 , 4);
    q.enqueue(12 , 3);
    q.enqueue(15 , 4);
    q.enqueue(11 , 1);
    int ind = q.top();
    cout << pr[ind].value<<endl;
    q.dequeue();
    ind = q.top();
    cout << pr[ind].value << endl;
return 0;
}

/*
class queuell{
    public :
        int data;
        int priority;
        queuell *next;
        queuell(){}
        queuell(int data, int prio)
        {
            this->data = data;
            this->prio = priority;
            this->next == nullptr
        }

};
void push(queuell **head , int data , int prio)
{
    queuell *start = *head;
    queuell *temp = new queuell(d , p);
    if((*head)->priority > prio)
    {
        temp->next = *head;
        (*head) = temp;
    }
    else
    {
        while(start->next != nullptr & start->next->priority < p)
        {
            start = start->next;
        }
        temp = temp->next;
        start->next = temp;
    }
}

int isempty(queuell **head)
{
    return ((*head) == nullptr);
}
*/


/*
---------------------STACK USING QUEUE-----------------------
/* Program to implement a stack using
two queue 
#include <bits/stdc++.h>

using namespace std;

class Stack {
	// Two inbuilt queues
	queue<int> q1, q2;

	// To maintain current number of
	// elements
	int curr_size;

public:
	Stack()
	{
		curr_size = 0;
	}

	void push(int x)
	{
		curr_size++;

		// Push x first in empty q2
		q2.push(x);

		// Push all the remaining
		// elements in q1 to q2.
		while (!q1.empty()) {
			q2.push(q1.front());
			q1.pop();
		}

		// swap the names of two queues
		queue<int> q = q1;
		q1 = q2;
		q2 = q;
	}

	void pop()
	{

		// if no elements are there in q1
		if (q1.empty())
			return;
		q1.pop();
		curr_size--;
	}

	int top()
	{
		if (q1.empty())
			return -1;
		return q1.front();
	}

	int size()
	{
		return curr_size;
	}
};

// Driver code
int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);

	cout << "current size: " << s.size()
		<< endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	cout << "current size: " << s.size()
		<< endl;
	return 0;
}
// This code is contributed by Chhavi
*/