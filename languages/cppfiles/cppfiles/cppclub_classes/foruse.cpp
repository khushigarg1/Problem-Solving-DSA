#include<iostream>
#include<string>
using namespace std;

int main()
{
   int t,i;
   for(i=0;i!=5;i++)
   {
       cin>>t;

       if(t==5)
       {
           break;                  // break means iteration over ho gye ye direct loop k bhar aa jayga
           //continue;             // continue krega loop ko
       }
   
       cout<<t<<endl;

    }
     return 0;
} 