/*--------------initialization in constructors---------*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;
/*
syntax for initialization list in constructor
constructor(arguments list): initialization section
{
    assignmenet + other code;
}
*/

class test
{
    int a;
    int b;

public:
    //test(int i,int j) : a(i),b(j)
    //test(int i,int j) : a(i),b(i+j)
    //test(int i, int j) : a(i), b(2*j)
    //test(int i, int j) : a(i), b(a+j)        //bcoz a ki value yha available so successfully run and compile
    //test(int i, int j) : b(j),a(i+b)      //it will give garbage value bcoz we had declared firstly a then b so a phle initialize hogi
    //this will create problem bcoz a will be initialize first
    //test(int i, int j) : a(i)
    test(int i, int j)  
    {
        a=i;
        b=j;
        cout << "constructor executed" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};

int main()
{
    test t(4, 6);
    return 0;
}