#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , flag = 0;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(arr[i] < arr[i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "array is not sorteed ";
    }
    else
        cout <<"array is sorted ";

    delete [] arr;
return 0;
}