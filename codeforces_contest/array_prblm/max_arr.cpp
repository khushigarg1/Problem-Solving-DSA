#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i =0 ; i < n; i++)
    {
        cin >> arr[i] ;
        cout <<" ";
    }
    int temp = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] <= temp)
        {
            temp = arr[i];
        }
    }
    cout << temp;
    return 0;
}