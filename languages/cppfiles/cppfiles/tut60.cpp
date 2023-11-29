#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
#include<fstream>
using namespace std;

/*the useful classes for working with files in c++ are:
1. fstreambase
2. ifstream ----->derived from fstreambase
2. ofstream ----->derived from fstreambase

in order to work with files in c++,you will have to open it ,primarily,there are 2 ways to open a file :
1. using the constructor
2. using the member functiom open() of the class
*/

int main()
{
    string st= "harry bhai";
    string st2;
    // opening files using constructor and writing it
    // ofstream out("sample60.txt");        // write operation 
    // out<<st;

    //opening files using constructor and reading it
    ifstream in("sample60b.txt");        // read operation 
    //in>>st2;
    //cout<<st2;         //this bcoz jb b hum ifstream ko use kte h tab newline character or spaces nhi aati hai to solve this prblmL:
    
    //getline(in,st2);    // first ek line puri print

    getline(in,st2);
    getline(in,st2);      //"is coming from a file " is trh apn itni br getline ko ruyn krte jaynge dusri line aati jaygi aati jaygi or ye upr st2 is vale st2 ko de degi
    cout<<st2;
    return 0;
}