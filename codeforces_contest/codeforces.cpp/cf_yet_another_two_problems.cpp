#include<iostream>
using namespace std;
int main()
{
    int t , k ;
    long long int a , b;
    cin >> t;
    for (int i = 0 ; i < t ; i++)
    {
        int count=0;
        cin >> a>> b;
        if(a>b)
        {
            k = a-b;
            for(int i = 10 ; i>0 ; i--)
            {
                count += k /i;
                if(k%i !=0)
                {
                    k = k%i;
                }
                else if(k%i==0)
                {
                    cout << count <<endl;
                    break;
                }
            }
        }
        else if( a==b)
        {
            cout <<"0" <<endl;
        }
        else
        {
            k = b-a;
            for(int i = 10 ; i>0 ; i--)
            {
                count += (k /i);
                if(k%i !=0)
                {
                    k = k%i;
                }
                else if(k%i==0)
                {
                    cout << count <<endl;
                    break;
                }
            }
        }
    }
    return 0;
}