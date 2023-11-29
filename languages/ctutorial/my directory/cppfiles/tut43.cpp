/*-------------ambiguity resolution in inheritance--------------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

//ambiguity 1
class base1
{
    public :
       void greet()
       {
           cout<<"how r u?"<<endl;
       }
};

class base2
{
    public :
       void greet()
       {
           cout<<"kaise ho"<<endl;
       }
};

class derived : public base1,public base2
{
    int a;
    public:
        void greet()
        {
            base1::greet();            //ambiquity reslution humne ye bna dya taki koi b derived k greet k call kre to base 1 k greet call ho jaye
        }
};

//ambiguity2
class B
{
    public:
        void say()
        {
            cout<<"hello world "<<endl;
        }
};

class D : public B
{
    int a;
    public:
        void say()
        {
            cout<<"hello budddyy "<<endl;
        }
};

//  D's new say() method will override base class's method
/*
class D : public B
{
    int a;       //ye upr vale fxn ki ambiguity ko already le lega or hello world print kr dega jab void say nh h tab upr se inherit kr lega
//jab base class k say ko inherit krti h derived class say ko derived class me nh define kr rkha ho0 tab basw class ka usse hota hai
//yadi usne apna fxn likha h to vo use run krta n vrna inherit hue say ko 
};
*/

int main()
{
/*---------ambibuity1-----------*/
//     base1 base1obj;
//     base2 base2obj;
//     base1obj.greet();
//     base2obj.greet();
//     derived d;
//    // d.greet();            //yha bhut bdi ambiguity vali bt ho gyi ki me kiska greet lu base1 kka ya bse 2 ka
//     d.greet();       //yha greet bas1 ki print ho jaygi

/*---------ambiguity2------*/
B b;
b.say();      //hello world

D d;
d.say();      //hello buddy

return 0;
}