#include<bits/stdc++.h>
using namespace std;
// copy constructor always do shallow copy
class student{
    int age;
    public:
        char * name;
        student (int age , char *name)
        {
            this-> age = age;
            // shallow copy 
            // this-> name = name;

            //deep copy 
            this-> name = new char[strlen(name) + 1];
            strcpy(this-> name , name);
        }

//copy constructor
        // student(student s)  here it is invalid statement bcoz copy constructor call ho rha yha jab apan studet s bnaa rhe hai nd ye bar bar jab b object pass hoga new copy constructor bna lega isk lye phir internal constructor work nh krega and infinie yahi chlta rhega so we want ki hum new constructor na banaye or jo object sepass kr rhe usi me change kre jo bhi krna nd all so we can use reference variable 
        // nd hum yha chathe hai ki jo s k through hai vo change nh ho ske bs jo pass ho rha vo change kr ske s only read kr paye just to avoid illegal changes 
        student(student const &s)
        {
            this-> age = s.age;
            // this-> name = s.name;       // shallow copy 

            // deep copy
            this-> name = new char[strlen(s.name)+1];
            strcpy(this-> name , s.name);
        }

        void display(){
            cout << name << " "<< age << endl;
        }
};

int main(){
//     char name[] = "abcd";
//     student s1(20 , name);
//     s1.display();

//     student s2(s1);
//     s2.name[0] = 'x';
//     s1.display();
//     s2.display();

    char name[] = "abcd";
    student s1(20 , name);
    s1.display();

    student s2(s1);
    s2.name[0] = 'x';
    s1.display();
    s2.display();

return 0;
}