/*-----------TEMPLATES WITH DEFAULT PARAMETERS----------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

template <class t1=int , class t2= float,class t3 = char>
//here we can use default arguments if we pass some values of t1 t2 t3 then it will give that values and if we dont do this then it will bgivre default values
class khushi
{
    public :
        t1 a;
        t2 b;
        t3 c;
        khushi(t1 x ,t2 y,t3 z)
        {
            a=x;
            b=y;
            c=z;
        }
        void display()
        {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
        }
};

int main(){
    khushi <> k(4 , 6.4 , 'g');
//here angular backet is necessary lke in fxns when we use fxns and dot use parameters the leave khali as it is here we dont write in angular brackets
    k.display();
    cout<<endl;
    khushi <float, char, char> K(1.4 , 'o','p');
    //khushi <float, char, char> K(1 , 'o','p');
    //apn jo dattypes usme denge angular brackets me vhi bat apnko bad me b manni hogi or usui hisab se declare krna pdega yah ye 1 ki jgh
    // garbage value dega bcoz apnne char kha or declare integer value ki
    K.display();
return 0;   
}