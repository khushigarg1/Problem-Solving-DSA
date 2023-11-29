#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(i%2==0)
        {
            arr[i] = 0;
        }
        else
        arr[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }
    
return 0;
}