/* copy constructor -> student s1(10,100);
                    -> student s2;
                    -> s2.age = s1.age ;
                    -> s2.rollnum = s1.agw;
                    -> student s2(s1);
                    -> s2.student(s1);

*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class student{
    private: int age;
    public : int rollnum;
             student(int a , int r){
                 age = a;
                 rollnum = r;
             }
             void display(){
                cout << "age :" <<" "<<age << endl<<"rollnum: " << rollnum << endl;
             }

             ~student(){
                 cout << " destructor called! "<<endl;
             }
};

int main(){
    /*  CONSTRUCTOR COPY VAALALALLLA
    student s1(10,100);
    cout <<  "s1: ";
    s1.display();

    student s2(s1);
    cout << "s2 : ";
    s2.display();

    student *s3 = new student(20,200);
    cout << "s3 : ";
    s3->display();

    student s4(*s3);
    student *s5 = new student(*s3);
    student *s6 = new student(s1);
    s5->display();*/

    /* COPY ASSIGNMENT OPERATOR CONSTRUCTOR */
    student s1(10,1001);
    student s2(20,2001);

    student *s3 = new student(30,3001);
    s2 = s1;
    s2.display();
    *s3= s1;
    s3->display();
    s2 = *s3;
    delete s3;
    
// s3 has a address of object so it has a address hota hai ro apnko deallocate s1 s2 s3 k rkna hai but s3 to ek normal pntr var hena so isko deallocate krna hmari responsibility hai 
return 0;
}
/*
COPY ASSIGNMENT OPERATOR (=)
student s1(10,1001);
student s1(20,2001);
we can only call one constructor t one time like apn ne s2 ka constructor call then we cannot call copy constructor
s1 = s2;
*/
/* DESTRUCTOR -> Same name as our class;
              -> no return type;
              -> no input arguments;
    ~student(){

    }
*/