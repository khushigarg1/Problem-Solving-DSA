#include<iostream>       //in cpp
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b;
    char c;
    bool metric_pass;

    cout<<"enter section\n";
    cin>>c;
    
    cout<<"roll no\n";
    cin>>a;

    cout<<"class\n";
    cin>>b;

    //cout<<"section is\n"<<c<<endl;
    //cout<<"roll no. is\n"<<a<<endl;
    //cout<<"class is\n"<<b<<endl;

    cout<<"is student metric pass\n";
    cin>>metric_pass;

   // cout<<metric_pass;
   cout<<c<<a<<b<<metric_pass;

   /*bool a;
   if(b>8)
    a=1;
   else 
    a=0;
    */
    return 0;
}
    
