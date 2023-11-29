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
    int x , count =0;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i] == x)
        {
            count ++;
        }
    }
    cout << count ;
    
return 0;
}