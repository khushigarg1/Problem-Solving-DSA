#include<iostream>
using namespace std;

// user defined data type hota h nd structure is used to combine diff types of data types like array is used to combine same type of data type

typedef struct employee
{
    int eid;     //4bytes              //diff data types int float char
    char fav;    //1 bytes
    float salary; //4 bytes
} ep ;                          //type def k bd apn bs ep b likh skte  iska mtlb h apn phle usko struct employee bolna chsthe the or ab ep
//;

union money
{                 //tino me se ek ki value ko decie krna h tab memory ko apne hisb se optimise krna jo union kr deta
    /*data*/                        
    int rice;  //4 bytes
    char car;   //byte
    float pounds;   //4byte 
}; 

int main()
{
    enum meal{ breakfast , lunch , dinner}; 
    //apn enum se in tino ko integer value de skte h
    meal m1=lunch;
    cout<<(m1==1);                                                    //1 yes right
    cout<<(m1==2);                                                    //0 milega bcoz vo 1 k equal h

    // cout<< breakfast << endl ;  //0
    // cout<< lunch << endl ;      //1 
    // cout<< dinner << endl ;     //2
   
 /* union money m1;
    m1.rice = 34;
    //if m1.car='c'; esa apn likh dete tab apnko rice ki correct value nh miegi garbage value milegi union ek time pr ek hi
    m1.car='c';
    cout<<m1.car;      //car ki value shi mil jaygi c but rice ki garbage bcoz over declare nh hua ink bich
    cout<<m1.rice;
 */

    // ep harry;
    // struct employee khushi;       //is trh se apn employee bna skte h
    // struct employee khu;
    // harry.eid =1;
    // harry.fav = 'c';
    // harry.salary = 1200000000;

    // cout<<"the value is "<<harry.eid<<endl;     
    // cout<<"the value is "<<harry.fav<<endl;     
    // cout<<"the value is "<<harry.salary<<endl;     

return 0;
}

/*
structure-->a dat type that states difference data types in the same memory location and whose total memory size of the structure is the
summation of memory that sizes of all its members , helps to store data of diff types as a single unit

union--->a data type that stores different data types in the same memory locations and whose total memory size depends on the memory size 
of its largest elements , helps to store data of different types as a single unit

enum---> a data type in c language that represents a value type for declaring a set of named constants
helps to assign constants to a set of names to make the program easier to read maintain and understand 
*/ 