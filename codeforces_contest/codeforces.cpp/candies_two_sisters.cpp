#include<iostream>
using namespace std;
int main()
{
    int n , t;
    cin>> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin >> n;
        if(n%2==0)
        {
            int res = (n/2)-1;
            cout << res <<endl;
        }
        else if(n==0)
        {
            cout << 0<<endl;
        }
        else
        {
            cout << n/2<<endl;
        }
    }
    return 0;
}