/*-------------------single inheritance----------*/
//a derived class with only base class                like A -> B
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class base
{
    int data1;         //private by default and is not heritable
    public :
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

void base :: setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base :: getdata1(void)
{
    return data1;
}

int base :: getdata2(void)
{
    return data2;
}

//base class mo use krk ek new class bnayi jiska name h derived class isme sare public members h vo to honge hi bcoz publically derive kra hai 
//or isk sath sath apnne data3 r 2 member fxn b add kre ek process or ek display
class derived : public base{
    //class is being derived basically
    int data3;
    public :
        void process();
        void display();
};

void derived :: process()
{
    data3=data2*getdata1();
}

void derived :: display()
{
    cout<<"value of data1 is "<<getdata1()<<endl;     //fxn k though isly bcoz data1 private h or inherite to hua nh so hume ese methood
    //se lana hoga jo inherit hua hai ab y public tha getdata1 to hum data1 ki valllue isse get kr skte hai
    cout<<"value of data2 is "<<data2 <<endl;      //ye to public hai base class me b
    cout<<"value of data3 is "<<data3 <<endl;    //or ye to derive me hi public hai to ese hi mil jayga
}

int main()
{
    derived der;       //yha apnne derived class ka object bnaya hai or apn isme setdata leynge jo ki public h inherit kr skte
    //derived class base class k public data ko access kr skti hai ese hi aa jaygi derived class me bcoz public hai
    der.setdata();             //data1 =10 .data2 =20
    der.process();
    der.display();

return 0;
}

/*data1 direct access nh bcoz ye private member hai or publically access kkr rhahai or apnne islye getdata 1 bnya jo data1 ka access de 
rha hai public k andr h jo derive hoga private me h vo nh hoga
*/