#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int n ;
    cin >>n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
        cout << " ";
    }
    cout <<endl;
    int sum = 0;
    for(int i = 0 ;i < n ;i++)
    {
        sum += arr[i];
    }
    cout << sum;
return 0;
}