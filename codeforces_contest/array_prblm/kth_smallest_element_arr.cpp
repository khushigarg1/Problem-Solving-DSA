#include<bits/stdc++.h>
using namespace std;
int main(){
    int size , k ; 
    // where k is the smallest element position
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << " enter position of smallest number : ";
    cin >> k;
    cout << arr[k - 1];
return 0;
}

/*
1 5 2 3 4
1 2 3 4 5
k = 2
k-1
*/