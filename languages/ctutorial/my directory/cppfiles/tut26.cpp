/*--------friend function-----------*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

// 1 + 4i
// 5 + 8i
// 6 + 12i
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    //below line means that non member fxn -> sumcomlex fxn is allowed to do anything with my private data
    friend complex  sumcomplex(complex o1, complex o2 );
    void printnumber()
    {
        cout << "your number is "<<a<< " + " <<b<< "i" << endl;
    }
};

// complex sumcomplex(complex o1,complex o2)
// {
//    complex o3;
//     o3.setnumber((o1.a + o2.a) , (o1.b +o2.b))
//     return o3;
// }
/*yha bhut sare error aaynge because sumcomplex n complex k private data ko access krna cha use apna dost man kr but compiler khega
 phle aap complex se kho declare kre ki tumne yse prmsn de di uska private data access krne ki*/

complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a) , (o1.b +o2.b));
    return o3;
}
//yha pr frnd fxn sath complex ne declare kr dya ki vo uska dost h or private data access kr skta h 
//but esa nh h ki y sumfxn class ka member fxn bn gya ho like apn main fxn m c1.sumcomplex jse nh chla skte
int main()
{
    complex c1, c2 , sum ;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    sum = sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}

/* properties of frnd fxns
1. not in the scope of class
2. sinnce it is not in the scope of the class , it cannot be called from the object of that class. c1.sumcomplex()==invalid
3. can be invoked without the help of any object 
4. usually contains the objects as argument means ki object ko input m leta h
5. can be declared nside public or private section of the class
6. it cannt access the members directly by their  names and need object_name.member_nameto access any member  like cout<<a;
 in sumcomplex invalid
*/