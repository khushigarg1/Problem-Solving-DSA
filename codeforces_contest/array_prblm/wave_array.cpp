#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }

    // for (int i = 0; i < size - 1; i++)
    // {
    //     for (int j = i +1; j < size ; j++)
    //     {
    //         if(arr[i] < arr[j])
    //         {
    //             int temp = arr[i] ;
    //             arr[i] = arr[j] ;
    //             arr[j] = arr[i];
    //         }
    //     }
    // }
    sort(arr , arr + size);
    for (int i = 1; i < size -1 ; i += 2)
    {
        /* code */
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
    
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    
return 0;
}