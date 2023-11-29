/*yadi static var nh bnate tab hr object ka apna ek count hoga or ek obj se dusre obj m count pass nh krva skte 
  iska soln h static var*/
/*static bnane k bd ek count ko sare object share krte h ,esa var jo class se judjata h isly static var ko class
  variable b khte h*/
/* is class k jitne object bnte jaynge to jo puranacount k usk according value aayg like phle count ki value 10
   tab next vale ki b 10*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
    }
    //yha yadi apmn stati snh bnate tab count hmesah 1 aata bcoz hr object ka apna count hota hai or ese static k sath sare object share
    //krte hai or ye bdta jata then 1 2 3

    //static fxn unko dusre static fxn ya var ka hi access hpta h bs
    static void getcount(void)
    {
        //cout<<id;      //throws an error   bcoz ye static var k nh h
        cout << "the value of count is " << count << endl;
    }
    //staic fxn main fxn me islyn use hota taki apnko object bnane ki need na ho class k name se hi run ho jaye
};

//-------------count is the static data member of class employee---------//
int Employee ::count; //default va;ue is zero
//int Employee :: count=1000;   yha hum count ko declare kr skte h but upr nh bcoz vha by default count 0 hota

int main()
{
    Employee harry, rohan, lavish;
    //harry.id=1;
    //harry.count;    //cannot do this as id and count are private

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    lavish.setdata();
    lavish.getdata();
    Employee::getcount();

    return 0;
}

/*properties of static variable 
static var ko apnko class k bhar b declare krna pdta or apn vhi usko modify kr skte classs m nhi 
like static int count=1000; uor class me nh  krkste but class k bhar modify kr skte
and we can use static var in any object means that nd sbk sath sharwe krta hai 
static fxn can only access of other static variable or fxn only
we can access with name of class in main fxn with using of scope resolution operator

*/