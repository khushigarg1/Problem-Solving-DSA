#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for(int j = 1 ; j < n ; j++)
        {
            if( arr[j-1] > arr[j])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }
return 0;
}