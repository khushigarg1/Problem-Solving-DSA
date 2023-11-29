#include<iostream>
using namespace std;
// #include "l3_creating_obj.cpp"
class student
{
    private:
        int age;
    public :
       int rollnum;
    void display()
    {
        cout << age <<" " << rollnum << endl;
    }
    int getage(){
        return age;
    }
    void setage(int a){
        age = a;
    }
    void setage(int a, int password){
        if(password != 123){
            return ;
        }
            // if we want ki sirf kuch authorized people hi ise access kr sake then it doesnot match then return 
        if(a<0){
            return; 
        }
            // a ki value yadi -ve then we cannot access the value so we will return from the fxn
        age = a;
    }
    // if we want to keep private data means ki wanna give password ki jab password yad ho tba hi age initialise kr paye then we can do this
};

int main()
{
    student s1;
    s1.setage(23);
    s1.rollnum = 101;
    s1.display();   
                                                                                              
    student* s2 = new student;
    (*s2).setage(24); 
    s2 -> setage(24);
    (*s2).rollnum = 106;
    (*s2).display();
    // s6 -> display();
}