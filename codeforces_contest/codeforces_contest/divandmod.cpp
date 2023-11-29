#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int l , r , a;
        cin >> l >> r >> a;
        int arrlen = (r-l)+1;
        int arr[(r-l)+1];
        int j = 0;
        for(int i = l ; i <= r ; i++)
        {
            arr[j] = ((i/a)+(i%a));
            j++;
            // cout << arr[j] <<" ";
        }
        int max = 0;
        for (int m = 0; m < arrlen; m++)
        {
            if(max < arr[m])
            {
                max = arr[m];
            }
        }
        cout << max;
    }
return 0;
}