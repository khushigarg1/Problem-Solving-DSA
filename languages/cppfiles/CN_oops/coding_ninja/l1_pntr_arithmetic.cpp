#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int i = 10;
    int* p = &i;

    cout << p <<endl;
    p = p + 2;
    // it will store address + 2 index ka nd it will increase 8 bytes that is one integer of 4 bytes and 2 of 8 bytes nd address is in hexadecimal 0 * 
    cout << p << endl;

    // cout << p << endl;
    p = p - 2 ;
    cout << p << endl;
    // it will come again in p 
    // it happens same as in all float char,  doubel only diff is thath all data types stores diff bytes and will increase by diff bytes

    double d = 102.3;
    double* dp = &d;
    cout << dp << endl;
    dp++;
    cout << dp << endl;
return 0;
}