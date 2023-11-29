#include <iostream>
// there are two types of header files:
// 1. system header files : it comes with the compiler
// 2. user defined header files : it is written by the programmer
//#include"this.h"--->this will produce an error if this.h is no present in the current directory
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "operators in c++:" << endl;
    cout << "folowing are the types of operators in c++ " << endl;
    //arithmetic operators
    //cout << "the value of a+b is" << a + b;
    //cout << "the value of a-b is" << a - b;
    //cout << "the value of a*b is" << a * b;
    //cout << "the value of a/b is" << a / b;
    //cout << "the value of a%b is" << a % b;
    //cout << "the value of a++ is" << a++;
    //cout << "the value of a-- is" << a--;
    //cout << "the value of ++a is" << ++a;
    //cout << "the value of --a is" << --a;
    //cout << "the value of a++ is" << a++;
    //cout<<endl;

    //assignment operator--->used to assign value to variables
    //int a=3,b=9;
    //char d='d';

    //comparison operators
    cout << "folowing are the types of comparison operators in c++ " << endl;
    cout << "the value of a==b is " << (a == b) << endl;
    cout << "the value of a!=b is " << (a != b) << endl;
    cout << "the value of a>=b is " << (a >= b) << endl;
    cout << "the value of a<=b is " << (a <= b) << endl;
    cout << "the value of a>b is " << (a > b) << endl;
    cout << "the value of a<b is " << (a < b) << endl;

    //logical operators
    cout << "following are the logical operators in c++" << endl;
    cout << "the value of ((a==b) && (a<b)) is :" << ((a == b) && (a < b)) << endl;
    cout << "the value of ((a==b) && (a<b)) is :" << ((a == b) || (a < b)) << endl;
    cout << "the value of (!(a==b)):" << (!(a == b)) << endl;
    
    return (0);
}