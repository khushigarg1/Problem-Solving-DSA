#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]= {1,2,3,4,5};
    int ind ;
    cin >> ind;
    for (int i = ind+1; i < 5; i++)
    {
        /* code */
        arr[i-1] = arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout <<arr[i] <<" ";
    }
    
    
return 0;
}