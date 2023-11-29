#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,4,7,2,3};
    for(int i =0 ;i < 5 ; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }   
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" ";
    }
return 0;
}