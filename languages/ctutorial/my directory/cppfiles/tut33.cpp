/*dynamic initialization iska mtlb ki jab constructors ko overload kya to dynamically object ko initialize krva 
  skte hai or usk bd decide krnge bnana*/
/* like user ka  inout lu phle usk bd decide kru object ko bnana */
/* dynamically means jab prgrm run ho rha usk time pr ,eans jb prgrm bn gya usk bd bhi nh pta ki konsa 
   constructor runhoga usk bd usen ne input usk upr depend krea */
/* ki floating h  h kis type ka husk upr depend krega */
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class bankdeposit 
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

    public :
        bankdeposit(){}          //ye garbage value dega ydi apn sirf show fxn call krte then
        bankdeposit(int p,int y ,float r);  //r can be a value like 0.04
        bankdeposit(int p,int y ,int r);    //r can be avalue like 14
        void show();
};

bankdeposit :: bankdeposit(int p,int y,float r)
{
    principal=p;
    years = y;
    interestrate = r;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue = returnvalue*(1+interestrate);
    }
}

bankdeposit :: bankdeposit(int p,int y,int r)
{
    principal=p;
    years = y;
    interestrate = float(r)/100;          //typecasting taki floating value aa jaye int na aaye bcoz precision loose n ho
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue = returnvalue*(1+interestrate);
    }
}

void bankdeposit :: show()
{
    cout<<endl<<"pricipal amount was "<<principal
        <<". return value after "<<years
        <<" is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    
    bd3.show();         //isko run krnge then ye garbage value dega aydi mano apn upr bankdeposit(){} ye nh hota to errors hi error aate
    cout<<"enter the value of p y and r "<<endl;
    cin>>p>>y>>r;
    bd1= bankdeposit(p,y,r);
    bd1.show();
   
    cout<<"enter the value of p y and R "<<endl;
    cin>>p>>y>>R;
    bd2= bankdeposit(p,y,R);
    bd2.show();
    return 0;
}
//yha aotomatic dekh lega ki kona constructor use krna h float orinteger k hisab se
// ydi apn koi ek extra object bnate or constructor nh bnate tab ye error dega bcoz use esa construtcor chiye us object k lye jisko vo call to kr ske
