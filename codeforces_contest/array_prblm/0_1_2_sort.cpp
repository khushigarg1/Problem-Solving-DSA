#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size] ;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int c_0=0 , c_1=0 , c_2=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0)
            c_0++;
        else if(arr[i]==1)
            c_1++;
        else    
            c_2++;
    }
    while(c_0!=0)
    {
        cout << "0 ";
        c_0--; 
    }
    while(c_1!=0)
    {
        cout << "1 ";
        c_1--; 
    }
    while(c_2!=0)
    {
        cout << "2 ";
        c_2--; 
    }
return 0;
}