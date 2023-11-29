#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
//FIRST APPROACH
    // int temp = arr[size-1];
    // for (int i = size; i >=0; i--)
    // {
    //     if(i == 0)
    //     {
    //         arr[i] = temp;
    //     }
    //     else
    //     {
    //         arr[i] = arr[i-1];
    //     }
    // }

//ANOTHER APPROACH
    int i = 0 , j = size-1;
    while (i != j)
    {
        cout << arr[i] <<"..."<<arr[j]<<endl;
        int temp = arr[i];
        arr[i] = arr[j] ;
        arr[j] = temp;
        i++;
    }
    
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i]<<" " ;
    }
    
return 0;
}