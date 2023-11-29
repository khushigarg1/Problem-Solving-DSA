#include<bits/stdc++.h>
using namespace std;
int main(){
    int *arr1 { new int[5]{6 , 4 , 2 , 1 , 5}};
    int *arr2 { new int[5]{1 , 3 , 2, 4 ,1}};
    int *arr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        /* code */
        arr[i] = arr1[i] - arr2[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }
    
return 0;
}