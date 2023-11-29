#include<iostream>
using namespace std;
int main()
{
    int  t, n ,c=0,d=0, a[10000];
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
        }
        for(int i =1 ; i <= n ; i++)
        {
            if(i%2!=0)
            {
                cout <<a[i-c] <<" ";
                c++;
            }
            else
            {
                cout << a[n-d] <<" ";
                d++;
            }
        }
        c = 0 , d = 0;
        cout << endl;
    }
    return 0;
}