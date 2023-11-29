#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int tsum = 0 , a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        tsum += a[i];
    }
    int half =  tsum/2;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i ; j < n ; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i]= a[j];
                a[j] = temp;
            }
        }
    }
    int count = 0 , sum = 0;
    for(int i = n-1; i >=0; i--)
    {
        sum += a[i];
        count++;
        if(half < sum)
        {
            break;
        }
    }
    cout << count;
return 0;
}