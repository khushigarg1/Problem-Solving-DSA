#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t , n , count = 0 ;
    cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        cin >> n ;
        int a[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        if(n==1)
        {
            cout <<"YES"<<endl;
            continue;
        }
        sort(a , a+n);
        for(int i = 1 ; i <n ; i++)
        {
            if(a[i] - a[i-1] > 1)
            {
                count ++;
                cout <<"NO"<<endl;
                break;
            }
        }
        // cout << count;
        // if(count < n )
        // {
        //     cout <<"NO"<<endl;
        // }
        // else{
        //     cout <<"YES"<<endl;
        // }
        // count =0;
        if(count==0)
        {
            cout <<"YES"<<endl;
        }
        count=0;
    }
    return 0;
}