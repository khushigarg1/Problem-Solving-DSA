/*---------------copy constructor----------*/
//ek esa constructor h jo dusre object ki n copy bna leta hai
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class number
{
    int a;
    public :
    //number (){}                        //default constructor
        number()
        {
            a=0;
        }
        number(int num)
        {
            a=num;
        }

        number(number &obj)
        {
            cout<<"copy constructor called!!! "<<endl;
            a=obj.a;
        }
//when no copy constructor is found , compiler supplies its own copy constructor 
        void display()
        {
            cout<<"the number for this object is "<<a<<endl;
        }
};

int main()
{
   // number x,y,z;         //y ebina default constructor k nh chlega islye apnko ek default constructorbnanna hoga
//jab apnne y bnaya number class to to humne ek constructor bnaya to ye match nh ho rha h 
//iska mtlb h ki mene koshish kri koi default constructor ko call krnw ki isly default constructor bnnan pdega
    
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
//like yadi i want that z1 exactly should reemble z then z1 ko bna dunga me copy constructor use krk and z pass kr dunga
//if i want ki x, y ka resemble kre jab x,y pass krva dunga
    
    number z1(z);      //copy constructor invoked
    z1.display();

    z2=z;            //copy constructor not called
    number z2=z;            //copy constructor called
//jab b is trh se object ko bnate hai copy constructor invoked hota hai bcoz isi line 
// m obj bnaya h yadi phle bne hue object em assignment operator ka use krte tab nh hoga
    return 0;
}