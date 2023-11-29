#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

/* 
create two classe
1. simple calculator - takes two input of two numbers using a utility fxn and performs +,-,*,/ and displays the results using another function
2.scientific calculator - takes two input of two numbers using a utility fxn and performs any four scientific operation of your choice
                         and displays the results using another function
create another class hybrid calculator ans inherit it using there 2 classes :
Q1. what types of inheritance are yu using ?---------->multiple inheritance
Q2. which mode of inheritance are u using?---------->public simple_calculator,public scientific_calculator
Q3. create an object of hybridcalculator and dispaly results of simple and scientific calculator
----->result displayed accurately 
Q4. how is code reusability implemented?
------>code reusability is achieved as i did not need to write any data member or member function in data clas hybrid .object (of hybrid class)
creaated in main fxn accessed all the data members fxns of base class
*/

class simple_calculator
{
    int a,b;
    public :
        void get_data_simple()
        {
            cout<<"ente the value of a "<<endl;
            cin>>a;
            cout<<"ente the value of b "<<endl;
            cin>>b;
        }
        void perform_operations(){
            cout<<"the value of a and b is "<<a+b<<endl;
            cout<<"the value of a and b is "<<a*b<<endl;
            cout<<"the value of a and b is "<<a-b<<endl;
            cout<<"the value of a and b is "<<a/b<<endl;
        }
};

class scientific_calculator
{
    int a,b;
    public:
        void get_data_scientific()
        {
            cout<<"ente the value of a "<<endl;
            cin>>a;
            cout<<"ente the value of b "<<endl;
            cin>>b;
        }
        void calculations(){
            cout<<"the value of sin(a) is "<<sin(a)<<endl;
            cout<<"the value of sin(b) is "<<sin(b)<<endl;
            cout<<"the value of cos(a) is "<<cos(a)<<endl;
            cout<<"the value of exp(b) is "<<exp(b)<<endl;
        }
};

class hybrid : public simple_calculator,public scientific_calculator
{

};

int main(){
    hybrid c;
    c.get_data_simple();
    c.perform_operations();
    c.get_data_scientific();
    c.calculations();
return 0;
}