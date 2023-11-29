#include<iostream>       //in cpp
using namespace std;
int main()
{
    int age;
    cout<<"enter age"<<endl;
    cin>>age;

    /*if(age>18)
    cout<<"eligible to vote";

    else{
        cout<<"not eligible";
    }
   */
  bool eligible;
  if(age>18)
  {
      eligible=1;
  }
  else
  {
      eligible=0;
  }
   return 0;
}

