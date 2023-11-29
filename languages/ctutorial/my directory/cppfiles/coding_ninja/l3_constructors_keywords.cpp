#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
/* CONSTRUCTCOR 
DEFAUlT CONSTRUCTORS -> same name of class 
                     -> no return type
                     -> no input arguments 
we can directly use constructor object like student s1 then s1.student() will aclled automatically
*/

class student
{
    private : int age;
    public: int rollnum;
            void setage(int a){
                age = a;
            }
            int getage(){
                return age;
            }
            void display(){
                cout << age << " "<<  rollnum << endl;
            }
//default constructor
            student(){
                cout <<"default constructor called! " << endl;
            }
// parameterizad constructor called
            student(int r){
                cout<< "constructor 2 called! " <<endl;
                rollnum = r ;
            }
            // student(int a , int r){
            //     cout << "this : " << this << endl;
            //     cout<< "constructor 3 called! " <<endl;
            //     this -> rollnum = r;
            //     this -> age = a;
            // }
            // student(int a , int r){
            //     cout<< "constructor 3 called! " <<endl;
            //     rollnum = r;
            //     age = a;
            // }
            
            student(int a , int rollnum){
                cout<< "constructor 3 called! " <<endl;
                this -> rollnum = rollnum;
// this is a keyword thaht holds the address of current object  nd yha likhna optional hai bcoz  bilkul clear h ki yha konsa kisk lye hai kiski value kisme dalna chathe hai
                this -> age = a;
            }
};

int main(){
    student s1(10,1001);
    cout << "Address of s1: " << &s1 <<endl;

    student s2(10);
    s2.display();
/*
    student s1;   //as ssoon as we make objects our constructtor will be called automatically
    s1.display();
*/
    // student s2(1);
    //if we dont make default constructor then it will give errror bcoz it will not match with any constructor arguments

    student * s3 = new student ;
    s3-> display();

    cout<< "parameterized constructor called ! " << endl;
    student s4(10);
    s4.display();
    
    student s5(18,101);
    s5.display();
return 0;
}