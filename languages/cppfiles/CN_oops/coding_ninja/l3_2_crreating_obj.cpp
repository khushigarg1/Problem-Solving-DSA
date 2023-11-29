#include<iostream>
using namespace std;
// #include "l3_creating_obj.cpp"
/*
classes-> user defined datatypes
objects -> statically -> classname object; -> student s1;
        ->  dynamically -> classname * object = new classname; -> student*s1 = new studnet;
        a pointer hai jisme  student k properties ka reference rakha hoga
class ->private     class defualt me private man leti hai yadi kuch nh likhte 
              it can nit be access out of the class
        public
        protected
*/
class student {
    // private:
    public :
        int age;
        int rollnum;
};

int main()
{
    // CREATING OBJECTS STATICALLY
    student s1;
    s1.age = 24;
    s1.rollnum = 101;
    cout << s1.age << endl;
    cout << s1.rollnum << endl;

    student s2;
    student s3,s4,s5;

    //CREATING OBJECTS DYNAMICALLY
    student* s6 = new student;
    (*s6).age = 31;
    // s6-> age;   firstly arrow dereference it and then dot 
    (*s6).rollnum = 106;
    cout << ((*s6).rollnum) << endl;
    cout << ((*s6).rollnum) << endl;

    student* s7 = new student;
}
/* OBJECTS PROPERTIES
   s1 is a object and s2 is alaso saobject which have seperateky rollnum and age is present
   s6 hai jisk pas address pdha hua hai s6 ka 
   -> s1.age = 3;
   -> s1.rollnum = 101;

*/