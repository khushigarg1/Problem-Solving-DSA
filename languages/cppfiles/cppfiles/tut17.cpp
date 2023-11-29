#include<iostream>
using namespace std;

inline int product(int x,int y)
{   
     //not recommended to use below lines with inline fxn
    //static int c=0;     //this executes only once
     //c=c+1;              //next time this fxn is run ,the value of c will be retained
    return x*y;
} 

//recursions ,static variable inline is not beneficial 

//default arguments yadi apn koi value nh dete to vo apne aap value le leta use deflt vlu khte
float moneyreceived(int currentmoney , float factor=1.04 )
{
     return currentmoney * factor;
}

//concstant arguments
/*int strlen(const char *p)
{
     
}*/

int main(){
    int a,b;
    //cout<<"enter the value of a and b";
    //cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    // cout<<"the product of a and b is "<<product(a,b) <<endl;
    int money = 100000;
    
    cout<<"if you have "<<money <<"ruppes in your bank account,you will recieve "<<moneyreceived(money) <<"rs after 1 year"<<endl;
    cout<<"for VIP : if you have "<<money <<"ruppes in your bank account,you will recieve "<<moneyreceived(money,1.1) <<"rs after 1 year";
    return 0;
}
