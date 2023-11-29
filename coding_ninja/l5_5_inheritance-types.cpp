/*
INHERITANCE TYPES
1 -> single inheritance       A -> B
2 -> multilevel inheritance   A -> B -> C
3 -> herarchy inheritance    D <-  A -> B
                                   |
                                   v
                                   C
4 -> multiple inheritance    A     B     C
                              \    |    /
                               v   v   v
                                \  |  /
                                   D

*/
#include<bits/stdc++.h>
using namespace std;

class teacher {
    public :
        string name;
        string age;

        void print(){
            cout <<"teacher" <<endl;
        }
};

class student{
    public :
        void print(){
            cout <<"student" <<endl;
        }
};
// frstly phle vali class call hogi jo phle likhi hui hai like isme teacher then student then ta
class TA : public teacher , public student{
    public :
        void print(){
            cout <<"ta" <<endl;
        }
};

int main(){
    TA a;
    // a.print(); if we do this then we will get error ki which print fxn willl call of teacher class or student class so ambiquity aa jaygi then we will do it through scope resolution operator
    a.student :: print();
    a.teacher :: print();
    a.print();
    // ye likhte hi ab ta class me check hoga ki usme print fxn hai ya nhi if it is not available there then it will check that if there is print fxn in both base class if it is thehre in only one class then it will print but it is present in both class then we have to check ki which fxn we should call 
return 0;
}