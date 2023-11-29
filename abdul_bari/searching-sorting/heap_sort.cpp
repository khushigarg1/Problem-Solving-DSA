#include<bits/stdc++.h>
using namespace std;

void insert_heap(int  Heap[] , int n )
{
    int i = n , temp = Heap[i];
    while (i> 1 && temp > Heap[i/2])
    {
        Heap[i] = Heap[i/2];
        i = i/2;
    }
    Heap[i] = temp;
}

int main(){
    int heap_arr[] = {0 , 10 , 20 , 30 , 25 ,  5 , 40 , 35};
    for (int i = 2; i <= 7; i++)
    {
        insert_heap(heap_arr, i);
    }
    
return 0;
}