/*-------------recursions------------*/
#include<iostream>
using namespace std;

/*int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n* factorial(n-1);
}*/

//step by step calcultion for factorial 4
/*
factorial(4)= 4 * factorial(3);
factorial(4)= 4 * 3 * factorial(2);
factorial(4)= 4 * 3 * 2 * factorial(1);
factorial(4)= 4 * 3 * 2 * 1;
factorial(4)= 24;
*/

int fib( int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

/*
fib(5)
fib(4) + fib(3)
fib(2) + fib(3) + fib(2) + fib(1)
*/

int main(){

    //factorial of anumber
    //6!=5*4*3*2*1 =720
    //1! = 1 by definition
    //0! = 1 by definition
    //n! = n * (n-1)!

    int a;
    cout<<"enter a number";
    cin>>a;
    // cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
    
    cout<<"the term in fibonacci sequence at position "<<a<<" is "<<fib(a) <<endl;
    return 0;
}

/*
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int fib(int);
int main()
{
    int a,i;
    cin>>a;
    for(i=1;i<=a;i++)
    {
    cout<<fib(i)<<" ";
    }
}

int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    return (fib(n-1)+fib(n-2));
}*/