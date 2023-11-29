#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

void print(int* p)
{
    cout << *p << endl;
}

void incrementpntr(int* p)
{
    p = p + 1;
}

void increment(int* p)
{
    (*p)++; // her we r doing that pntr jha point kr rha usko change dereferencing
}
int main()
{
    int i = 10;
    int * p = &i;

    print(p);     // 10
    
    cout<< p << endl;
    incrementpntr(p);
    cout<< p << endl;
    // it will not change here like  a integer bcoz we had send only copy of p no addrress of p upr fxn m change hone se is pr no diff it will be same exactly both time

    cout << * p << endl;
    increment(p);
    cout << * p << endl;
    // here both p has same address so we can change from anywhere nd it will get change
    // m not changing p m changing the value pointed by p nd implement ho jaygaphle 10 nd bd m 11
    // the address is getting passed by value nd m using that address to change actual value so we will change value wha ja kr
    
return 0;
}