#include<iostream>
using namespace std;

int main()
{
    //what is a pointer? ......>data type which holds the address of other data types
    int a=3;
    int* b = &a;       //esa ptr var jo int ko hold kre or dusre varible k addresss ko store kre
    // & -----> address of operator
    cout<<"the address of a is "<<&a<<endl;      //addresss memory m address h jo assign kra gya h a ko during time of running
    cout<<"the address of a is "<<b<<endl;
    
    // *----->dereferenc operator (value at operator)
    cout<<"the value at address b is "<<*b<<endl;

    //pointer to pointer
    int** c=&b;           //stores address of pointer
    cout<<"the addrsess of b is "<<&b<<endl;
    cout<<"the addrsess of b is "<<c<<endl;
    cout<<"the value at c is "<<*c<<endl;
    cout<<"the value at address of address of c is "<<**c<<endl;

return 0;
}