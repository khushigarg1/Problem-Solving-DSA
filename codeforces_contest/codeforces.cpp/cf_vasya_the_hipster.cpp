#include<iostream>
using namespace std;

int main(){
    int a , b ;
    cin >> a >> b;

    // cout << (b>a ? a : b) ;

    if(a>=b)
    {
        a= a-b;
        a = a/2;
        cout << b <<" " << a;
    }
    else 
    {
        b = b - a;
         b = b/2;
         cout << a<<" "<<b;
    }
return 0;
}