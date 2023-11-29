#include<iostream>
using namespace std;

int main()
{ 
    /*for loop--->syntax for(initialization;condition;updation)
    {
        loop body(c++code);
    }
    */
   int i=1;
    for(i=0;i<50;i++)
    {
    cout<<i<<endl;
    }
    
    /*example of infinite loop
    for(i=1;1<2;i++)
    {
        cout<<i<<endl;
    }
     */

    /*while loop in c++
    syntax:
    while(condition)
    {
        c++ statements;
    }

    printing 1 to 40 numbers
    int i=1;
    while(i<=40)
    {
        cout<<i<<endl;
        i++;
    }

    infinite loop
    while(true)
    {
        cout<<i<<endl;
        i++;
    }
    */

   /*do while loop in c++

   syntax:
   do
   {
       c++ statements;
   }while(condition);

   printing 1 to 40 numbers 

   int i=1;
   do
   {
       cout<<i<<endl;    ek br loop bina cndtn check kre chlega
   }while(i<=40);
   */
    return 0;
}