/*
virtual and abstract classs
virtual fxn are those which are present in base class and overridden in the derived class
and humne parent class me hi virtuall keywod add kr dya tha fxn me jo ki hum run time pr decide kr rhe ki konsa fxn run ho rha with the help of any base class pointer

PURE VIRTUAL FXN :> are those jinki koi definition nh hoti 
jse humne 
virtual void print() {] bnaya   
but that is  anormal virtual fxn 
virtual void print = 0  this is a pure virtual fxn 
structure likhna hai there is no definition fo this fxn 

any class which contains pure virtual fxn then class abstract class ban jaygi like incomplete 
hmare pas esa fxn hai jiski apnne defination nh di 
-> we cannot create an object of this class 
->

ab js ehi koi class abstract class ko inherit krti hai then car class hass two option
1 -> implement all the pure virtual fxns in the car class 
2 -> become an abstract class

car class me ek incomplete fxn a ajayga vehicle class ka jab vo inherit kr rhi so it is also caleed incompleteclass

but we want ki car class abstract class na bane then 

USECASE 
1-> ek employee and -> hr 
                    -> managers
                    -> engineers
                    -> others
hmne e name ka array bnaya tha jo employee * type ka tha jis pr har object ka address pdha hua hai 
yha hum calculate salary fxn all krnge     prblm is e k through only vhi access kr skte hai jo employee class me hai so ek virtual fxn employee me b bnaya tha   
but ideally its wrong bczo hm employee class me thodi bta skte hai ki sallary ksiki kse calculate ho rhi haithen we willmake pure virtual fxn  kuki hum isko definition nhi de skte bczo we canndot decide how sallary will be calculated and by creating the pure virtual fxn  we r enforcing child classes ki tum is fxn ko overide kr do bczo yadi definition nhi likhnge to ye bhi abstract classs ban jaygi sabhi so definition likhna jruri 

obverall hum pure virtual fxn bna denge base class me islye jo b use inherit krega use fxn bnana hi pdega or definition vrna abstract class bn jaygi  
*/

#include<bits/stdc++.h>
using namespace std;

class vehicle {
    public :
        string colour;
        //pure virtual fxn
        virtual void print() = 0;
};

class car : public vehicle{
    public :
        int numgears;
        void print(){
            cout <<"car"<<endl;
        }
};
int main(){
    // vehicle v;       we cannot create an object of an abstract class 
    // vehicle v;
    car c;
return 0;
}