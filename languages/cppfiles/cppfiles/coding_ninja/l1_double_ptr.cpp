#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

void increment(int **p)
{
    p = p + 1;
} // it will not change bco zit will give copy only 

void increment2(int** p)
{
    *p = *p +1;
}// it will get change bcoz it will point *p in the main fxn that is address koi point krega or change

void increment3(int **p)
{
    **p = **p + 1;
}// same it will get change nd will change the value of i address pr ja kr change

int main(){
    int i = 9;
    int * p = & i;

    int **p2 = &p;
    // p2 is a pointer which stores address of a pointer variable 
    // p2 me p k address and isk andr i ka address 
    cout  << p2 << endl;
    cout  << &p << endl;
    // both wil print same address

    cout << p << endl;   // value of p 
    cout << *p2 << endl;   // value of p by dereferencing
    cout << &i << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    // hum tino trh se i pr phuch rhe hai 

    increment(p2);
    increment2(p2);
    increment3(p2);
    
return 0;
}