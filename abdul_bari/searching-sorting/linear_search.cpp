#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[] , int n , int ele)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i] == ele)
        {
            return i;
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
    int key;
    cin >> key;
    cout << linearsearch(arr , n , key);
return 0;
}

//here timecomplexitty is o(n)
// but in binary search me it is less than o(n)