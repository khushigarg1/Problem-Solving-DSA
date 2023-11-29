//manipulators are that operators that helps to formatting data display   data display kis trh se hi rha isko cntrl krte
//two main manipulators are    endl to display new line
//iomanip
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ //*******manipulators in c++****
    // int a=3,b=78,c=1233;
    // cout<<"the value of a is: "<<setw(5)<<a<<endl;
    // cout<<"the value of b is: "<<setw(5)<<b<<endl;
    // cout<<"the value of c is: "<<setw(5)<<c<<endl;

    // cout<<"the value of a without setw is: "<<a<<endl;
    // cout<<"the value of b without setw is: "<<b<<endl;
    // cout<<"the value of c without setw is: "<<c<<endl;

    //*****operator precidence*******
    int a = 3, b = 4;
    //int c=a*5+b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;

    return 0;
}