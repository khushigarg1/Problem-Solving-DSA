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
    public :
    complex()
    {
        a=0;
        b=0;
    }
       complex(int x,int y)
       {
           a=x;
           b=y;
       }

       complex(int x)
       {
           a=x;
           b=0;
       }
       void display()
       {
           cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
       }       
};
//parameters jo mene pass kye h vo match krnge vhi vala fxn mera run ho jayga
int main()
{
    complex c1(4,5);
    c1.display();

    complex c2(2);
    c2.display();
    
    complex a;
    a.display();
    return 0;
}