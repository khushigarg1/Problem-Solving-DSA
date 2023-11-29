#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = { 2 , 9 , 5 , 3 ,2 ,8};
    int min , secmin;
    min =arr[0];
    for (int i = 0; i < 6; i++)
    {
        /* code */
        if(arr[i] > min && arr[i] < secmin)
        {
            secmin = arr[i];
        }
        else if(arr[i]<min)
        {
            secmin = min;
            arr[i] = min;
        }
    }
    cout << min << " "<<secmin;
return 0;
}