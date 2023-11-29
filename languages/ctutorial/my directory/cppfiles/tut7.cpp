#include <iostream>
using namespace std;

int c = 45; //global variable

int main()
{
    //******************build in data types****************//
    // int a, b, c;
    // cout << "enter the value of a:" << endl;
    // cin >> a;
    // cout << "enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "the sum is " << c << endl;
    // cout << "the global c is " << c << endl; //but here ye local vale ko hi print krega

    // if we want to print global value then we have to use scope resolution operator
    // cout << "the global is " << ::c << endl; //global variable ki value


    // //******************float,double,long double Literals****************//
    float d = 34.4f;
    long double e = 34.4l; //if f lga dete h like 34.4f jab asa a float pass hogi
    cout << "the size of 34.4 if " << sizeof(34.4) << endl;
    cout << "the size of 34.4f if " << sizeof(34.4f) << endl;
    cout << "the size of 34.4F if " << sizeof(34.4F) << endl;
    cout << "the size of 34.4l if " << sizeof(34.4l) << endl;
    cout << "the size of 34.4L if " << sizeof(34.4L) << endl;

    cout << "the value of d is " << e << endl;
    cout << "the value of e is" << e;

    //******************reference variables****************//
    //  rohan das--->monty--->rohu------>dangerous coder
    // float x=455;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //******************typecasting****************//
    int a = 45;
    float b = 45.6;
    cout << "the value of a is " << a<<endl;
    cout << "the value of a is " << (float)a<<endl;

    cout << "the value of b is " << (int)b<<endl;
    cout << "the value of b  is " << int(b)<<endl;
    int c = int(b);

    cout << "the expression is " << a + b<<endl;
    cout << "the expression is " << a + int(b)<<endl;
    cout << "the expression is " << a + (int)b<<endl;

    return 0;
}