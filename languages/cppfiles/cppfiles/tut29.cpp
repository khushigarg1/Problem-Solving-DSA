/*-----------constructors------------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class complex 
{
    int a,b;
    public:
    //creating a constructor 
    // constructor is a special member function with same name as of the class
    // it is used to initialize the object of its class
    // it is automatically invoked whenever an object is created

    complex(void);           //constructor declaration--->that fxn which name same as class and it runs automatically for that object which made by us
    void printnumber()
    {
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(void) //------>default constructor as it accepts no parameter 
{
    a=10;
    b=0;
    //cout<<"hello";
}

int main()
{
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
return 0;
}

/* characteristics of constructor
1. it should be declare in the public section of the class
2. they are automatically invoked whenever the object is created 
3. they canot return values and do not have return types 
5. it can have defualt arguments 
5. we cannot refer to their address 
*/