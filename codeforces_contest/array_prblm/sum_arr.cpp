#include<bits/stdc++.h>
using namespace std;
int main(){
    int *arr = new int[5];
    int *arr1 { new int[5]{1, 2 , 3 , 4 , 5}};
    int *arr2 { new int[5]{1, 2 , 3 , 4 , 5}};

    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin >> arr1[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin >> arr2[i];
    // }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        arr[i] = arr1[i] + arr2[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }

    delete [] arr;
    delete [] arr1;
    delete [] arr2;
    
return 0;
}