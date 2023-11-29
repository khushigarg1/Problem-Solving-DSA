#include<bits/stdc++.h>
using namespace std;
int max_subarray(int arr[] , int n)
{
    int max  = arr[0], curr = 0;
    for(int i = 0 ; i < n ;i++)
    {
        curr = curr + arr[i];
        if(max < curr)
        {
            max = curr;
        }
        if(curr < 0)
        {
            curr = 0;
        }
        cout << i << " "<< max << " "<<curr << endl;
        }
    return max;
}
// -47 43 94 -94 -93 -59 31 -86    = 137
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int max = max_subarray(arr , n);
    cout << max;
return 0;
}