#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,ind , ele;
    cin >> n >> ind >> ele;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    for (int i = n-1; i >=ind; i--)
    {
        /* code */
        arr[i+1] = arr[i];
    }
    arr[ind] = ele;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }
    
return 0;
}