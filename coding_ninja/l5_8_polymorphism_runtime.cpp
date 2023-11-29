/*
POLYMORPHISM RUN TIME :> i wnat to take decision on run time ki apn konse operation nd kya lena chathe hai
if we want to take deision on run time
we have need to help of virtual fxns thhose are present in base class and they are overridden in the derived class
*/

#include<bits/stdc++.h>
using namespace std;
class vehicle {
    public :
        string colour ;
    virtual void print() {
        cout <<"vehicle "<<endl;
    }
};

class car :public vehicle
{ 
    public :
        int numgears;
    // void print(){
    //     cout <<"car"<<endl;
    // }
};

int main(){
    vehicle v;
    car c;
    v.print();    //vehicle 
    c.print();     //car

    vehicle *v1 = new vehicle;       //dynamicaaly object we had made 
    //v which is pointing to an new vehicle object 
    vehicle *v2 ;   
    // v2 = &v;    //we can do this too
    v2 = &c; 
    v1->print();
    v2->print();
// it will prnt fxn of car clas bcoz of virtual 
// ydai car class me gfxn na ho to vehicle pr chle jaynge ye hum run time pr check kr rhe 
// yadi hum vehicle ka b remove to error
// virtual fxn ki help se run time polymorphism ki help kr skte
// hmare aps 4 trh k log hai sbki sallary ka forula alg hai sbse phle  employee class bnaynge usme hr(1) , managers(3) , engineers(20) , others(4) bna lenge inheritance se one way si ki hr k lye salary calaculate fxn call nd sbk lye alg alg 
// and common fxn hai charo k pas common salary when we can make an array fo an employee name size of 24 and hum pdh chuke hai ki base class ka object child class k obj ko points kr skta amd now hum sb index me kisi na ksii ka address rkha hga jo object ko point kr rha hoga    e[i] -> calculate sallary();   like jo i pr jiska object rkha hoga usk lye fxn call ho jauga   ek traverse se hmara kam ho jayga vse to 


// ek array jsime sbk alg alg objects rkhe hue hai like hr managers and sbk nd hum is employee pr ek loop run the e[i] -> calculate sallary();     is fxn ko hum employee me b virtual fxn bna denge ith index pr jis type ka object rkha hoga vesa calculatesallary call ho jayga 
// hume alg alg sb pr ttraverse krne ki need nhi 
return 0;
}