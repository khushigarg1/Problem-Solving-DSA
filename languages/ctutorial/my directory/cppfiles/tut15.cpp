#include<iostream>
using namespace std;

// function prototype
// type function-name (arguments);
int sum(int a,int b);          //------->acceptable
//int sum(int ,int );         //------->acceptable
//int sum(int a,b);          //------->not acceptable

void g(void) ;             //------->acceptable
void g() ;                //------->acceptable

int main()  
{  
    int num1,num2;
    cout<<"enter the num1"<<endl;
    cin>>num1;
    cout<<"ente the num2"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters 
    cout<<"thr sum is "<<sum(num1,num2);
     g();
    return 0;
}

int sum(int a,int b)
{
    int c=a+b;
    //formal parameters a and b will be taking values from actual parameters num1 and num2
    return c;            //apn jo b value yha return krte tb vo sum(num1,num2) m aa jata
}

void g()
{
    cout<<"\n hello, good morning";
}