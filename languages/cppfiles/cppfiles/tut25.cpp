/*--------array of objects--------*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

    int n, i, count = 1;
    class employee
    {
        int id;
        int sallary;
        public:
           void setid(void)
           {
               sallary = 122;
               cout<<"enter id of employee"<<endl;
               cin>>id;
           }    

           void getid()
           {
               cout<<"the id of this employee is "<<id<<endl;
           }
    };

    int main()
    {
        // employee harry,rohan,lovish,shruti;
        // harry.setid();
        // harry.getid();
        employee fb[100];
        for(int i=0;i<4;i++)
        {
        fb[i].setid();
        fb[i].getid();
        }

        return (0);
    }