#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[] , int n , int key)
{
    int start =0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        /* code */
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            end = mid-1;
        }
        else
        {
            start = mid +1;
        }
    }
    return -1;
}
int main(){
    int n ;
    cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int ele;
    cin >> ele;
    cout <<binary_search(arr , n , ele);
return 0;
}

/*
time complexityy  
o(log n base2);
har iteration k bd n = n/2 hote jayga islye jitne iterations k bd retur hoga uska half like1/2power k 
n/2powerk
k = iterations
k = logn base2 
*/