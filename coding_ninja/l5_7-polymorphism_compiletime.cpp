/*
POLYMORPHISM :> many forms
code behaves diff in diff situations 
1 -> compile time  :-> i will decide at compile time ki what i need to do
2 -> run time :-> we will decide at run time 

1-> compile time -> 
1-> functon overloading    we have diff fxn of same name 
                bcoz here many fxn are of same name and we decide at compile time ki whick d=fxn should be called like with one parameter and 2 and without parameter   we cannot fxn like one "int test()" and secodn "void test()""
2-> method overriding   we hav etwo classe s like a and b ,a is base class and b is child class b is inheriting to a like a me print fxn hai and b class bhi print fxn ko create kr deti hai thats is overriding
*/

#include<bits/stdc++.h>
using namespace std;

// int test(int a , int b ){

// }
// int test(int a){

// }
// int test(){

// }

class vehicle {
    public :
        string colour ;
    void print() {
        cout <<"vehicle "<<endl;
    }
};

class car :public vehicle
{ 
    public :
        int numgears;
    void print(){
        cout <<"car"<<endl;
    }
};
//here we have override same fxn that is void print() fxn 
int main(){
    vehicle v;
    car c;
    v.print();    //vehicle 
    c.print();     //car

    vehicle *v1 = new vehicle;       //dynamicaaly object we had made 
    //v which is pointing to an new vehicle object 
    vehicle *v2 ;    //here humne ek pointer(8bytes) bnaya hai object nh bnaya which is pointing to garbage location
    // v2 = &v;    //we can do this too
    v2 = &c;   //we can do this too c is a car class object and not v2 is pointing to car class object  base class pointer can points to child class object but vice versa is not allow 

    v1->print();
    v2->print();
    //using this v2 i can only access thos properties which arepresnet in my vehicle class now v2 has print fxn in car class also and vehicle toothen   yha ye c ki jgh vehicle ka fxn call kr rha v2 vehicle class ka object hai so it will  print print fxn of vehicle class jis class ka objecthoga usika rpint fxn will call
    //so ye compile time pr decide ho rha hai ki kona fxn call krna hai 


return 0;
}