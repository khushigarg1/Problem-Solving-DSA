/*---------------pprotected access mdifier-------------*/
/*
for protected member :
                       pubic derivation         private derivation       proteected derirvation
1. private members        not inherited           not inherited             not inherited
2. protected members      protected                private                  protected
3. public members         public                   private                  protected
private members not inherited  islye hi to proctored bna
*/

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class base 
{
    protected :
        int a;      
//yha hum a ko inherit chaathe hai ese ki a private ho but itna sensitive nhi hai ye or itna sensitive b nh hai ki koi bhi use bhar se access kr ske 
    private:
        int b;        //but yenht sensitive sso hum chathe h ise private rkhna
        
};

/*class derived : base
{ 
    
};*/

class derived : protected base
{ 
    
};

int main()
{
    base b;
    derived d;
    //cout<<d.a;               declared protected hai s hum print h ktva skte isko direct 
    //cout<<b.a;                ye run h hga bcZ aap direct members ko inherit nh kr skte
    //wil not wrk sinc a protected in both base as well as derived class
return 0;
}