#include<bits/stdc++.h>
using namespace std;
int main(){
    int max ;
    int *arr { new int[6] {1 , 2 ,2 , 3 , 4 , 5}};
    for (int i = 1; i < 6; i++)
    {
        /* code */
        if(arr[i-1] < arr[i])
        {
            arr[i-1] = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arr[i];
    }
    
return 0;
}