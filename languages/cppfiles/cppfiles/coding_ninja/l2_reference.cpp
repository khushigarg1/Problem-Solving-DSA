#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

void increment(int &n){
    n++;
} // it means thhat this n is also points to i of main fxn thaht is reference to i

// BAD PRACTICE
int& f(int n){
    int a = n;
    return a;
}

int* f2(){
    int i = 10;
    return &i;
}
// if we returning address and pointer variable of a fxn then we r doing wrong bcoz jab upr vala fxn ha like usme address return krega nd main me aa kr store hoyga but jse hi fxn return hoyga uski emmory to clear ho jaygi local vra tha or ydi apn jo memory aayi usko access krne ki koshish krneg bd me to nh kr paynge so we r doing it wrong memory ko yad rkhne ki koshish to bevkufi hia
//  local var ka adress 

int main(){
    int* p = f2();
    int i ;
    i = 9;
    
    int& k1 = f(i);   //f(a)
    // if we can send data by ref then can received data by ref
    //  here if we receiving address then hume dhyan rkhna hoga ki hum kyakrna cha rhe bcoz jo b value aygi apn usko vaps increase b kr skte purani k lye vaps step likhni pdegi -- nd alll ese bcoz upr jo fxn me memory vo to sirf upr brackets me hai jese hi ye address ayegi nd iska scope clear hua ye isko clear kr skta
    // but we can increment nd all by using k      here overall ref vaps aa rha so we have to be more careful

    increment(i);
    cout << i << endl; // now it will change if we pass reference  

    int &j = i; 
    // j is a reference var for i that is we can change the value of i by increasing j nd vice versa
    // when we create this then we have to tell ki which memory it will store
    
    // int &j;
    // j = i;           we cannot write this

    i++;
    cout << j <<endl;     //10
    j++;
    cout << i << endl;    //11

    int k =100;
    j = k;
    cout << i << endl; //100 bcoz memory is same na so j ki change then i ki b 


return 0;
}

/*
we can make var jinka khudka space nh hoga ksior k memory space ko they will accessek ko change then dusre me reflect 
USE fxn me bhejne k 2 bennefit hai 
frst dono same memory ko use kr rhe hai ek change then other will laaso change
second ref k through we r sendning so hume copy nh bnani pdh rhi new storage ki no need
bas symbol table me entry hhui ki ye sb 

*/