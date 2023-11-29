// #include<iostream>
// #include<vector>
// #include<cmath>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t , a[100];
    long int n ;
    cin >> t;
    while (t--)
    {
        int d =0 , rem =0;
        cin >> n;
        if(n>=1000)
        {
            rem = n%1000;
            d++;
            a[d] = (n - rem);
            n = n%1000;
        }
        if(n>=100)
        {
            rem = n%100;
            d++;
            a[d] = (n - rem);
            n = n%100;
        }
        if(n>=10)
        {
            rem = n%10;
            d++;
            a[d] = (n - rem);
            n = n % 10;
        }
        if(n < 10 && n > 0)
        {
            d++;
            a[d] = n;
        }

        vector <int> v;
        for(int i = 1 ; i <= d ; i++)
        {
            v.push_back(a[i]);
        }
        cout << v.size() <<endl;
        for (int j = 1; j <= v.size(); j++)
        {
            cout << a[j] <<" ";
        }
        cout <<endl;       
    }
    return 0;
}