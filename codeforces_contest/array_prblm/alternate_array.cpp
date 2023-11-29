#include<bits/stdc++.h>
using namespace std;
void print(int *ar  , int n)
{
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            cout << ar[i];
        }
        else
        cout << " ";
    }
    
}
int main(){

    int n ;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print (arr , n);
return 0;
}