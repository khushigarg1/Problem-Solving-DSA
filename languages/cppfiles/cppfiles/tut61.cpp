/*
c++ : file I/O [reading & writing to a fiel]
3 useful classes
1. fstreambase class
2. ifstream --> derivedd from 1
3. ofstream --->derived from 1

upper 3 classes comes from an header fiel which name is fstream

read operation 
 ifstream in(this.txt);
 string st;
 in>>st;    //just like cin

write operation
 ofstream out("this.txt");
 string st= " harry";
 out <<st;    //just like cout    it writes to a file
*/

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
   // connecting our file with hout stream 
    // ofstream hout("sample60.txt");

    // //creating a name string and filling it with the string entered by the useer
    // cout<<"enter your name";
    // string name;
    // cin>>name;
    
    // //writing a string to the file
    // hout<<"my name is "+ name;

    // hout.close();  //issse jo link bna hua tha na file or prgrm k bich me vo cut jayga ek trh s   mtlb ki free krvdya ise ab isk sath no work

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is : "<<content;
    hin.close();
return 0;
}

