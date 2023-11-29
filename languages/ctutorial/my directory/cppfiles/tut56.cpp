/*-----virtual functions------------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class base
{
    public :
       int var_base=1;
       virtual void display(void)
       {
           cout<<"1. displaying base class variable "<<var_base<<endl;
       }
};

class derived : public base
{
    public :
       int var_derived=2;
       void display(void)
       {
           cout<<"2. displaying base class variable "<<var_base<<endl;
           cout<<"2. displaying derived class variable "<<var_derived<<endl;
       }
};

int main(){
   base  * base_class_pointer;
   base obj_base;
   derived obj_derived;

   base_class_pointer = & obj_derived;
   base_class_pointer->display();

return 0;
}
/* polmorphism ek property jisse objects jo ki alg alg classes ko belong kr rhe h ek trh k msz ko respond krte hai .
if we make pointer of base class and which points to derived class but we only run base lass fxn not derived classs lekin sirf apn use
 base class ka hi use.
or if we make virtual fxn in base class then we can run derived class after doing all that.
hum pta lga skte h prgrm ko dekh kr hi ki konse fxn run krnge knse nhi but actually jo fxn k address jo compiler jo point krta hai  or object k addrsss 
se associate krta h vo krta h run time pr .
virtual fxn decide krega ki konsa dsiplay fxn h jise apka objct bind krega 
*/