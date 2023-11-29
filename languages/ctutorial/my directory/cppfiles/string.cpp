//string      string is not an array 
#include <iostream>
//#include<string>
using namespace std;

int main()
{
    //string string_name;
    string name = "khushi"; //declaration
    string surname = "garg";
    // cout<<name;
    
    //cin<<surname[2];        print a
    //cin>>name>>surname;      

    string full_name;

    full_name = name + " " + surname;
    cout << full_name;

    return (0);
}

/*
for(int i=0;i<100;i++)
{
    if(surname[i]=='g')
    {
        cout<<"yes g character exists";
        break;
    }
}
*/