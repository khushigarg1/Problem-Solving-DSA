#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
// same access pr rho ya kam jane pr koshush then no issue but jyada access pr jane ki koshish then more issues issues

void g(int const &a){
    // a++;   cannot do this
}

void f(int const * p ){
// *p++;     we cNNOT DO THIS BCOZ P I A CONstant var they can only read the file they dont have access to change 
}

int main(){
    //int const i = 10;
    // int* j = &i; // we cannot store the constant integer to the normal pointer bcoz apne pas phle hi only read access then we cannot take writ eaccess
    
    int const i1 = 10;
    int const* j1 = &i1;   //  j1 is a pointer constant to integer 
    // now we can do this a constnat integer can store to constant pointer
    // this line means j1 is pointing to a constant integger so we cannot change vlaue thrpugh j1
    // *p++;   cannot do
    f(&i1);
    f(j1);
    g(i1);

    int i = 12;
    int const * j = &i;
    //we can do this bcoz i has both access then it give read or wrie access thaht ones need like j only can read the filee cannot change 
    cout<< *j << endl;   //12
    i++;
    cout<< *j << endl;    //13
   

return 0;
}

/*
int main(){
    int i = 10;
     int j = 9;
    int const* p = &i ;
          p is a pointer constant to an int
    p = &j;    we can do this bcoz p is not a  constant p pointer isconstant 

    int * const p = &i;
        here p is a constant pointer to int 
    so we cannot do this
    //p = &i;    cannot do 
    *p = 10;    we can do this

    if we want ki vo na to pntr ko change kr ske na pntr ko then we can make bith constant
    like
    int const * const p = &i;
    p is a constant pointer to a constant integer
    // p = &i;
    // *p ++;   
    cannot do this
}
*/

