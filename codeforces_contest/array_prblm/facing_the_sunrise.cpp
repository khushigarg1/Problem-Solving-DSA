#include<bits/stdc++.h>
using namespace std;
int main(){
    int size , count = 1 , pres_max ;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    pres_max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i] > arr[i-1] || arr[i] == pres_max)
        {
            count++ ;
            pres_max = arr[i];
        }
    }
    cout << count;
return 0;
}