// #include<bits/stdc++.h>
// using namespace std;
// class Queue
// {
//     public:
//     int front;
//     int rear;
//     int size;
//     int *arr;
//     Queue(){
//         front = 0;
//         rear = 0;
//         size = 100;
//         arr = new int[size];
//     }
//     Queue(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//     }
// };

// int isempty(Queue *q)
// {
//     if(q->front == q->rear)
//     {
//         return 1;
//     }
//     return 0;
// }

// int isfull(Queue *q)
// {
//     if(q->rear == q->size-1)
//     {
//         return 1;
//     }
//     return 0;
// }
// void enQueue(Queue *q , int val)
// {
//     if(isfull(q))
//     {
//         cout << "Queue is full";
//     }
//     // else if(q->rear == 0)
//     // {
//     //     q->rear = 1;
//     //     q->front = 1;
//     //     q->arr[q->rear] = val;
//     // }
//     else{
//         q->arr[q->rear] = val;
//         q->rear++;
//     }
// }
// int deQueue(Queue *q)
// {
//     if(isempty(q))
//     {
//         cout << "empty";
//         return -1;
//     }
//     else{
//         int temp = q->arr[q->front];
//         q->front++;
//         // cout << temp;
//         return temp;
//     }
// }

// int main(){
//     Queue q;
// //BFS IMPLEMENTATION
//     int i = 0;
//     int visited[7] = {0, 0 ,0 ,0 ,0 , 0 ,0};
//     int arr[7][7]=
//     {
//         {0, 1, 1 ,1, 0, 0, 0},
//         {1, 0, 1, 0, 0 ,0, 0},
//         {1, 1, 0, 1, 1 ,0, 0},
//         {1, 0, 1, 0, 1 ,0, 0},
//         {0, 0, 1, 1, 0 ,1, 1},
//         {0, 0, 0, 0, 1 ,0, 0},
//         {0, 0, 0, 0, 1 ,0, 0},
//     };
//     cout << i << " " ;
//     visited[i] = 1;
//     enQueue(&q , i);       
//     while(!isempty(&q))
//     {
//         int temp = deQueue(&q);
//         for(int j = 0 ;j < 7 ; j++)
//         {
//             if(arr[temp][j] == 1 && visited[j]==0)
//             {
//                 cout << j <<" ";
//                 visited[j] = 1;
//                 enQueue(&q ,j);
//             }
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

    int visited[7] = {0, 0 ,0 ,0 ,0 , 0 ,0};
    int arr[7][7]=
    {
        {0, 1, 1 ,1, 0, 0, 0},
        {1, 0, 1, 0, 0 ,0, 0},
        {1, 1, 0, 1, 1 ,0, 0},
        {1, 0, 1, 0, 1 ,0, 0},
        {0, 0, 1, 1, 0 ,1, 1},
        {0, 0, 0, 0, 1 ,0, 0},
        {0, 0, 0, 0, 1 ,0, 0},
    };

    void dfs(int i)
    {
        cout << i <<" ";
        visited[i] = 1;
        for(int j = 0 ; j < 7 ; j++)
        {
            if(arr[i][j] == 1 && visited[j]==0)
            {
                dfs(j);
            }
        }
    }
int main(){
    dfs(0);
    return 0;
}