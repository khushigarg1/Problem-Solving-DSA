//-----------------------------------------inheritance ---------------------------------------*/
//ek class jisse apn dusri clpass bna lete hai   ek class dusri claass k inherit krti h
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

//base class-----> jisse new class ko janm dya ja rha ho
class employee
{
    // int id;            //ye private k bd visibility mode nh deskta isk run nh hoga
    public:
        int id;
        float salary;
        employee(int inpid)
        {
            id = inpid;
            salary = 34.0;
        }
        employee(){}            //default constructor 
        //jab apn dderives class bnat h to ek automatic constructor call hota h isly default constructor need
};

//derived class-----> jo ki nayi classs hoti hai r janm leti hai
/*------------------derived class syntax-------------------*/
/*
class {{derived-class-name}} : {{visibility-mode }} {{base-class-namespace name}}
{
    members/methods/etc........
}
vm h ki apn apni class kp kis trh se inherite kr rhe hai
vm ya to public ho skta h ya private
Note 1:
1. default visibility mode is private
2. public visibility mode : public members of the base class becomes public members of the derived class
3. private visibility mode : public members of the base class becomes private members of the derived class
4. private members are never inherited
*/

//creating a programmer class derived from employee base class
/*class programmer : employee
{
    public :
    int languagecode;
        programmer(int inpid)
        {
            id=inpid;
            languagecode=9;
        }
        void getdata()
        {
            cout<<id<<endl;
        }
};*/

class programmer : public employee
{
    public :
    int languagecode;
        programmer(int inpid)
        {
            id=inpid;
            languagecode=9;
        }
        void getdata()
        {
            cout<<id<<endl;
        }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    //cout<<skillf.id<<endl;             throughs an error bcoz apnne progrmmer ko privately inheri kra h 
    //yadi dono class k public mmebers h to apn ise print kr skte hai yadi public vm mode
    //or ydi private members h derived class k tab apn id ko print nh kr skte yadi private vm mode 
    cout<<skillf.id<<endl;     //now it willprint bcoz we had made programmer public
    skillf.getdata();
    return 0;
}