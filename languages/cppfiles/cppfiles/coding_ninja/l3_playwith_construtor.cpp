#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class student{
    private: 
        int rollnum;
    public: 
        int age;
        ~student(){
            cout << "destructor called! "<<endl;
        }

        student(){
            cout <<"constructor 1 called "<< endl;
        }
        student(int rollnum){
            cout << "constructor 2 called" << endl;
            this -> rollnum = rollnum;
        }
        student (int a, int r){
            cout <<"constructor 3 called "<<endl;
            rollnum = r;
            age = a;
        }
};

int main(){
    student s1;           //constructor 1 called 
    // student();   
    student s2(17);       //constructor 2 called
    student s3(18,203);   //constructor 3 called

    student s4(s3);       //copy constructor called
    s1 = s2;              //no constrcutor called only copying the value s2 to s1  copy asssignment operator
    student s5 = s4;      // copy constructor  student s5(s4);
    // creating new object with the help of copy assignment it can be in two steps
    /*
    student s5;
    s5 = s4;
    internally esa nh hota 
    student s5(s4);  ye interpret hota hai    copy constructor will be called
    */

return 0;
}