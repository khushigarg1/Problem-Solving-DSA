#include<bits/stdc++.h>
using namespace std;

class student {
    public :
        int age ; 
        const int rollnum;
        // now we cannot change valuw of rollnum y ato we can initialize vale with declaration ya abhiapnne esa kya      then usme garbage value aa gayi nd ab we cannot do like this rollnum = 3 nd nothing if we want change value      then we would have to use initialization list 
        // yadi hum const int rollnum = 101 kr de then  we can but sab student ke rollnum kse set krnge apn 

        int &x;    // age reference variable

        // student(int r) : rollnum(r) 
        // {
        //     // rollnum = r;    we cannot do this 
        // }

        // student(int r , int age ) : rollnum(r) , age (age){

         // }

        student (int r , int age ) : rollnum(r) , age(age) , x(this-> age)
        {
    
        }

    void display(){
        cout << age <<" " << rollnum <<" " << x <<" " << endl;
    }
};

int main(){
    // student s1(220);
    // s1.age = 20;  
    // s1. rollnum = 202;   // it will give error bcoz we cannot change but is vali line k phle ye student s1(220 ) m ede degi error bcoz usme alreay garbage value store ho chuki hai and we cannot make defauly=t constructor jo diff garbage value store kare phle const ko change krk
    student s2(101,20);

    // s1.display();
    s2.display();
return 0;
}