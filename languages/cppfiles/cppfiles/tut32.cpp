#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class simple
{
    int a;
    int b;
    int c;
    public :  
        simple(int x,int y=2,int z=8)
        {
            a=x;
            b=y;
            c=z;
        }
        void display()
        {
            cout<<"the value of a ,b and c is "<<a<<","<<b<<" and "<<c<<endl;
        }
       
};
int main()
{
    simple c(1,3,4);       //a=1,b=3,c=4  
    simple c1(1,3);     //a=1,b=3,c=8 by default arguments
    simple c3(1);       //a=1,b=2,c=8 by default arguments

    c.display();
    c1.display();
    c3.display();
return 0;
}