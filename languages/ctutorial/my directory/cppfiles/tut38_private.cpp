/*-------------------single inheritance----------*/
//a derived class with only base class                like A -> B
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

class base
{
    int data1; //private by default and is not heritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1(void)
{
    return data1;
}

int base ::getdata2(void)
{
    return data2;
}

class derived : private base
{
    //class is being derived basically
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    setdata(); //yha hum erive k private data set kr skte hai
    data3 = data2 * getdata1();
}

void derived ::display()
{
    cout << "value of data1 is " << getdata1() << endl; //fxn k though isly bcoz data1 private h or inherite to hua nh so hume ese methood
    //se lana hoga jo inherit hua hai ab y public tha getdata1 to hum data1 ki valllue isse get kr skte hai
    cout << "value of data2 is " << data2 << endl; //ye to public hai base class me b
    cout << "value of data3 is " << data3 << endl; //or ye to derive me hi public hai to ese hi mil jayga
}

int main()
{
    derived der;
    // der.setdata();
    /* ye derive nh hoga bcoz upr private derived class bnayi and class base k jo public members or fxns the vo sb deriv ho kr private
 members ban jate   isly setdata private bn jaynge to hum inkobhar main fxn me calll nh kr skte islye upr within class call kra  */
    der.process();
    der.display();

    return 0;
}
