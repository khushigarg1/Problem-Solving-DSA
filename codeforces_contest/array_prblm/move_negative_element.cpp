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
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            int temp = arr[i];
            for (int j = i; j > 0; j--)
            {
                arr[j] = arr[j-1];
            }
            arr[count] = temp;
            count++ ;
        }
    }
    
    // int count = n-1;
    // for(int i = n-1 ; i >=0 ; i--)
    // {
    //     if(arr[i] < 0)
    //     {
    //         int temp = arr[i];
    //         for(int j = i ; j <= count ; j++)
    //         {
    //             arr[j] = arr[j+1];
    //         }
    //         arr[count] = temp;
    //         // cout << temp<< " " <<count <<" " <<arr[count-1] << " "<<arr[count] << endl;
    //         count--;
    //     }
    // }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
return 0;
}