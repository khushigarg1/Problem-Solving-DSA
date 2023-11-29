/* -------frnd class me ek class k fxn ko dusri class ka frnd kse bnaynge------- */
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

//forward declaration --> iska mtlb apn compiler ko guarantee ki jo class complex h vo aage mojud h
class complex;

class calculator
{
public:
    int aadd(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
    //int sumcompcomplex(complex, complex);
    // {
    //     return(o1.a + 02.a);
    // }
};

class complex
{
    int a, b;
    //individually declaring functions as frnd if ther is 100 fxn the it will be so hard to declare individually 
    /* friend int calculator ::sumrealcomplex(complex, complex);
    friend int calculator ::sumcompcomplex(complex, complex); */
    
    // AlITER : declaring the entire calculator class as frnd
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);

    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}