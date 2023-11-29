#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

template <class t>
class harry 
{
    public :
        t data;
        harry(t a)
        {
            data=a;
        }        
        void display();
};

template <class t>
void harry <t> :: display()
        {
            cout<<data;
        }

void func(int a)
{
    cout<<" i am first func() "<<a<<endl;
}//apn fxn ko bhar se scope resolution operator bna kr b use kr kste hai 

template <class t>
void func( t a)
{
    cout<<"i am first temptalised func() "<<a<<endl;
}

template <class t>
void func1( t a)
{
    cout<<"i am first temptalised func1() "<<a<<endl;
}

int main()
{
    harry <int> h(5);
    //harry <float> h(3.4);
   // harry <char> h('c');
    cout<<h.data<<endl;
    h.dispaly();

    func(4);        //ab ye likhte hi cnfusion ki konsa fxn call hoga 
    //exact match takes the highest priority
    func1(4); 
return 0;
}