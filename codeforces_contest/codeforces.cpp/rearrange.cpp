#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int flag =1;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i< n ; i++)
        {
            cin >> arr[i];
        }
        // int hash[n];
        // for(int i = 0 ; i < n ; i++)
        // {
        //     hash[i] = 0;
        // }
        // // int max = arr[n-1];
        // for(int i = 0 ; i < n ; i++)
        // {
        //     if((arr[i-1] == arr[i]))
        //     {
            
        //     }
        // }
        sort(arr, arr+n);
        for(int i = 1 ; i < n ; i++)
        {
            if((arr[i-1] == arr[i]))
            {
                flag =0;
                break;
            }
        }

        if (flag ==0)
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES"<<endl;
        }
    }

    return 0;
}