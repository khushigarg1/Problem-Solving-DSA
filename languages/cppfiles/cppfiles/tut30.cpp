/*-----parameterized and default constructors------*/
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
    complex(int,int);           //constructor declaration--->that fxn which name same as class and it runs automatically for that object which made by us
    void printnumber()
    {
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x,int y) //------> parameterizied  constructor as it takes 2 parameter 
{
    a=x;
    b=y;
    //cout<<"hello";
}

int main()
{
    //implicit call
    complex a(4,6);

    //explicit call
    complex b = complex(5,7);
    
    a.printnumber();
    b.printnumber();
return 0;
}