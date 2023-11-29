#include<bits/stdc++.h>
using namespace std;
int main(){
    int test, a , b , c ;
    
    cin>> test;
    for (int i = 0; i < test; i++)
    {
        // int frst = 0 , scnd = 0 , third = 0;
        cin >> a >> b >> c;
        if(a == b && b == c)
        {
            cout << a+1 <<" "<< b+1 << " " << c+1;
        }
        else if(a > b && a > c)
        {
            // max = a;
            a = 0;
            b = (a - b)+1;
            c = (a - c)+1;
            cout << a <<" " << b << " " << c;
        }
        else if(b > a && b > c)
        {
            // max = b;
            a = (b - a) +1;
            b = 0;
            c = (b - c)+1;
            cout << a <<" " << b << " " << c;
        }
        else
        {
            //    max = c;
            a = (c - a)+1;
            b = (c - b)+1;
            c = 0;
            cout << a <<" " << b << " " << c;
        }
        cout << endl;
    }
return 0;
}