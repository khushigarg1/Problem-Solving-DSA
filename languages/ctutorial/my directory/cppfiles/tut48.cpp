/*------------constructor in derived class inheritance--------------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
/*
sbse phle bse class ka constructor run hota h usk bd derived
case 1 :
class b: public a{
    //order of execution of consturctor -->first a() then b()
};

case 2:
class a: public b,public c{
    order of execution of constructor --->first b()--->then c() then a()
};

case 3:
class a: public b ,virtualpublic c{
    order of execution of constructor-->firsy c() then b() then a()
};
*/

class base1
{
    int data1;
    public:
        base1(int i)
        {
            data1=i;
            cout<<"base1 class constructor called "<<endl;
        }
        void print_database1()
        {
            cout<<"the value of data1 is "<<data1<<endl;
        }
};

class base2
{
    int data2;
    public:
        base2(int i)
        {
            data2=i;
            cout<<"base2 class constructor called "<<endl;
        }
        void print_database2(void)
        {
            cout<<"the value of data2 is "<<data2<<endl;
        }
};

class derived : public base1,public base2{
    int derived1,derived2;
    public :
// case 4:   derived(int a,int b,int c,int d) : base2(b),base1(a)
      //here orde will not change bcoz upr apnne phle base1 ko initialize kra h then base2 

        derived(int a,int b,int c,int d) : base1(a),base2(b)
        {
            derived1=c;
            derived2=d;
            cout<<"derived class constructor called "<<endl;
        }
        void print_data(void)
        {
            cout<<"the value of derived1 is "<<derived1<<endl;
            cout<<"the value of derived2 is "<<derived2<<endl;
        }
};

int main(){
    derived khushi(1,2,3,4);
    khushi.print_database1();
    khushi.print_database2();
    khushi.print_data();
return 0;
}