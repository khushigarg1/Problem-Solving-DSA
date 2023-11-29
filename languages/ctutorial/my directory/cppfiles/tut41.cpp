/*---------------multiple inheritance deep drive------------*/
//A and B ------->C
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

/*------------syntax for inheriting in multiple inheritance
class derived : visibility - mode baase1,visibility-mode base2
{ 
    class body of class " derivedC"
};
*/

class base1
{
    protected :
        int base1int;
    public:
        void get_base1int(int a)
        {
            base1int=a;
        }
};

class base2
{
    protected :
        int base2int;
    public:
        void get_base2int(int b)
        {
            base2int=b;
        }
};

class base3
{
    protected :
        int base3int;
    public:
        void get_base3int(int b)
        {
            base3int=b;
        }
};

class derived : public base1 ,public base2,public base3
{
    public:
        void show()
        {
            cout<<"the value of base1 is "<<base1int<<endl;
            cout<<"the value of base2 is "<<base2int<<endl;
            cout<<"the value of base2 is "<<base3int<<endl;
            cout<<"the sum of base1 and base2 is "<<base1int + base2int +base3int<<endl;
        }
};

/*the inherited class will look something like this:
data members
    base1int--->pprotected
    base2int---->prtected
member functions
    get_base1int()----->public
    get_base2int() ----->public
    show() ----->public
*/

int main()
{
    derived d;
    d.get_base1int(12);    
    d.get_base2int(13);
    d.get_base3int(5);
    d.show();    
return 0;
}