/*------this pointer in cpp---------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class A
{
    int a;
    public:
        //A& setdata(int a)
        void setdata(int a)
        {
            //a=a;        dono jgh a same to it will not run ese islye apn this keyword use krnge it will give garbage value
            this->a=a;  //this is a keyword which is a pointer which points to the object which is being created or which invokes the mmeber fxn 
            //cpp k ander local variable ko sbse jyada imp di jati hai
           // return *this;   it will a object on that  me .getdata ese  hi lga skta hu main fxn m like this a.setdata(4).getdata();

        }

        void printdata(void)
        {
            cout<<"the vlaue of a is "<<a<<endl;
        }
};

//if we want to return the object of template A then we have to write return this keyword
int main(){
    A a;
    a.setdata(4);
    a.printdata();
return 0;
}