#include <iostream>         //#include<iomanip>   input output manipulation
using namespace std;

int main()
{
    string name = "khushi";
    string surname = "garg";
    string full_name;
    
    cin>>name>>surname;
    full_name = "hello\n" + surname + " " + name;

    cout << full_name;
    return 0;
}