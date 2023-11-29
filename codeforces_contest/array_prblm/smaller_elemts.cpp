#include<bits/stdc++.h>
using namespace std;
int countOfElements(int arr[], int n, int x) 
{
    int count =0;
    for(int i = 0 ; i < n ;i++)
    {
        if(arr[i] <= x)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int x ; 
    cin >> x;
    cout << countOfElements(arr , n , x); 
    
    return 0;
}