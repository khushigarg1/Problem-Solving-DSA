#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = { 2 , 9 , 5 , 7 ,2 ,8};
    int max =0 , secmax =0;
    for (int i = 0; i < 6; i++)
    {
        /* code */
        if(arr[i] > secmax && arr[i] < max)
        {
            secmax = arr[i];
        }
        else if(arr[i] > max)
        {
            secmax = max;
            max = arr[i];
        }
    }
    cout << max << " " << secmax;
return 0;
}