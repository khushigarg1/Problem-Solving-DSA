#include<bits/stdc++.h>
using namespace std;

class student{
    static int totalstudents;
    public :
        // non static function 
        int age;
        int rollnum;

        // int totalstudent;
        // we want thhat totalstudent sbk lye same ho like objects will make we will increment in totalstudent but esa hota nhi hai every object takes new number overall measn value of totalstudent should be same for all the objects that is students so we will make statsic fxn  

        //static int totalstudents;         //total number of students present 
        // totalstudent class k pas hoga so ise class se hi access krnge obj se access nh kr skte 

        student (){
            totalstudents++;
        }
        // we will do like this to increment in class bcoz  jese jese obj call hoga constructor call hoga automatically or value increase hoti jaygi jitne object bnnge tab 

        static int gettotalstudent(){
            return totalstudents;
        }
        // now this fxn does not require any object it will call automaticallly after constructor call bcoz it  is a static fxn ye sratic hai islye vse bhi class ka name chiye obj ka name nhi    or totalstudent vali property ko we will make private
};

int student :: totalstudents = 0;   // accessing static property

int main()
{
    // student s1;
    // cout << s1.rollnum <<" "<< s1.age <<endl;    // default values
    // cout << student :: totalstudents <<endl;    // by default  0
    // cout << s1.totalstudents ;  // error will not come it will print 0 by default but statically its wrong so we should not do like this
    // s1.totalstudents = 10;

    // student s2;
    // cout << s2.rollnum <<" "<< s2.age <<endl;
    // cout << student :: totalstudents <<endl ; // 20 

    student s1;
    student s2 , s3 , s4 , s5;
    // cout << student :: totalstudents ;
return 0;
}

/*
static mmembers static properties ko access kr skte hai
static fxn k pas this keyword nh hota bcoz we dont call this fxn by obj 
*/