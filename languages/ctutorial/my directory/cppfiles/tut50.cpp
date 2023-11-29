/*----------revision pointer------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    //basic example
    int a=4;
    int* ptr=&a;
    //*ptr =999;               ye b kam krega isme 999 print 
    cout<<"the value at a is "<<*(ptr)<<endl;
    
    //new operator
    //new keyword
    int* p =new int(40);     //dynamically rk integer bnaya jiski value 40 h
    //int* p =new float(40.78);     
    cout<<"the value at address p is "<<*(p)<<endl;

    //if we want to allocate memory to store 4 integers nd etc then
    // int * arr=new int[3];     //integer array
    // arr[0]=10;
    // arr[1]=20;
    // arr[2]=30;
    // cout<<"the value of arr[0] is "<<arr[0]<<endl;
    // cout<<"the value of arr[1] is "<<arr[1]<<endl;
    // cout<<"the value of arr[2] is "<<arr[2]<<endl;
    //thus we can use continuous blocks of memory allocate krva kr

    //delete operator
    int * arr=new int[3];     //integer array
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
  //  *(arr+1)=20;        we can write like this to print a[1]
 //value od address plus 1 means dusra valel block me 20 value dal do

    delete arr; 
    //isse pura fxn dagmaga jayga or ye garbage value dena start kr dega islye ye jruri nhjo value h vo milegi 
    //apnne khe dya ki kr do isko free jo arr me value h vo hume nh chiye to humne arr ko delete kr dya
    delete [] arr;          //to delete full continuous block of memory
//ye free ho chuka h value store krne k lye is trh hum dlt kr skte hai dynamic allocated int float ko or usi k sath sathbdyanamically allocated block ko or

    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
return 0;
}