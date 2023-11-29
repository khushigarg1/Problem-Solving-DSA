#include<bits/stdc++.h>
using namespace std;
int main(){
    int size ;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = arr[size - 1];
    cout << "rotate array ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
    
return 0;
}