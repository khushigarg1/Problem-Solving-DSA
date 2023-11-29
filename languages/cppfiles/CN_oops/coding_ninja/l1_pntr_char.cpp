#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    char str[] = "abcde";
    // temporary memory jisme ye store and 
    // temporay memory ki copy bnegi or hmare lye memory allocate hui usko use krnge ,string h islye 6 size hogi including null pointer

   /* char* pstr = "abcde";   */
    // temporary memory will make to  store data and a pntr bnaya h jo isi actual memory koi point krega we shiuld far from this bcoz it will give error some time or not kbhi aayega kbhi nh islye isko use nh krna

    int a[]  = {1,2,3};
    char b[] = "abc";
    cout << a << endl;  // address of first element of an array
    cout << b << endl;   // will print all character till then it will get null pointer it does not print address

    char* c = &b[0];
    cout << c << endl;
    // it will print all characters  will not print address memory pr jayga and prints all characters

    char c1 = 'a';
    char * pc = & c1;
    
    cout << c1 << endl;    // a
    cout << pc << endl;
    // it will goes to start printing till then it will get null pointer and it wil print first a and then will print garbage value till null pointer
return 0;
}