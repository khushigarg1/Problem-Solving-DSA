#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int i ,j;
        for ( i = 0 , j = n-1; i < j; i++,j--)
        {
            /* code */
            arr[i] = (arr[i] + arr[j]);
        }
    
        for (i = 0 , j = n-1; i <= j; i++ , j--)
        {
            /* code */
            cout << arr[i] << " ";
        }
return 0;
}