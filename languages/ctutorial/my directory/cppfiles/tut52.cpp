/*-----------array of objects using pointers--------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class shopitem
{
    int id;
    float price;
    public:
        void setdata(int a, float b)
        {
            id=a;
            price=b;
        }
        void getdata(void)
        {
            cout<<"the id of this item is "<<id<<endl;
            cout<<"the price of this item is "<<price<<endl;
        }
};

/*    1   2   3
    ^   ^   ^
    |   |   |
    |   |   |  ---->ptr++
    |   |   |
    ptr------> increasing
    ptrtemp
    yha ptr ek pinter h jo address store kr rha or pan for loop chlaynge usk bd vo increase hote hote 3 ka stre krne lg jayga phr ye koi 
    cnfrm na h ki usk bd vo vaps 1 ka addess store krne lg jaye vo 3 pr hi rhega or duabra lop then vo increase ho jayga
*/

int main(){
    int size=4;
    //int * ptr = &size;
    //int *ptr= new int [34];        
    /* dynamically iska mtlv 34 integrs ko store krne ki memory allocate kr do compiler se khnge isly apn yha 34 jitni
     memory blocks allocate krk de rha or vo khega ki memory k phle block ka address ptr m store kr dega or increment krk baki k tum allocate 
     kr lena  */ 
    
    //1. general store item
    //2.veggies item
    //3.hardwarenitem
    shopitem *ptr= new shopitem[size];     //yha shop  ko int float ki trh use kr rhe datatypes
    int p,q,i;
    shopitem *ptrtemp=ptr;
    for( i=0;i<size;i++)
    {
        cout<<"enter id and price of an item "<<i+1<<endl;
        cin>>p>>q;
        //*(ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"item number: "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
return 0;
}