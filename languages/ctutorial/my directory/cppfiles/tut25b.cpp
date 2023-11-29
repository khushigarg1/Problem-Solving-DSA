/*--------passing objects-----------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class complex
{
    int a;                      //a,b are independent dimensions of complex numbers
    int b;

    public:
     void setdata(int v1,int v2)   
    {
        a=v1;    //ye assign islye bcoz a,b ko apn direct excess nh kr skte bcoz private h so setdata k through v1,v2 ki value a,b m assign
        b=v2;
    }

    void setdatabysum(complex o1,complex o2)        //y complex no. isi class k object h
    {
        a=o1.a + o2.a;
        b=o1.b + o2.b;
    }
    
    void printnumber()
    {
        cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printnumber();

    c2.setdata(3,4);
    c1.printnumber();

    c3.setdatabysum(c1,c2);
    c1.printnumber();
return 0;
}