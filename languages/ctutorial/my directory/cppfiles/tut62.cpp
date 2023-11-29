/*------open() & eof() fxns--------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"this is me \n";
    out<<"this is also me \n";
    out<<"this is me also \n";
    out.close();

    ifstream in;
    string st , st2;                       //ye bhi ek method h ek ek krk puri linevread kr skte like read get fxn ki jgh
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    
    //eof=end of file
    while(in.eof() ==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
return 0;
}