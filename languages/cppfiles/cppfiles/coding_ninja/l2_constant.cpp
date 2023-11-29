#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
// constant var means we cannot change the value of const var whiich is constant

int main(){
    // CONSTANT INTEGER
    const int i = 10;
    int const i = 10;
    // i = 12;     we had make const integer i then w ecannot chnage this bcos it will be constant

    // CONSTANT REFERENCE FROM A NON CONSTANT INTEGER
    /* WE CANMAKE CONSTANT ONLY TO PATH NOT TO STORAGE*/
    int j = 12;
    int const &k = j;
    // const int &k = j;
    j++;
    // k++;   we cannot increment in k bcoz k is a constant var whch points to j 
    // j can read and write file so it has both access to read and write so we can send copy of j to k var but it is consstnat so it can only read this not write
    cout << k << endl;    // we can chng value of k through j bcz they have same copy 

    // CONSTANT REFERENCE FROM A CONSTANT INTEGER
    int const m = 10;
    int const &n = m;
    // m++;   we can not do this bcoz m and n both arre cconstant they can  only read file bcoz both have not access to write something in file and to change 
    // n++;   
    
    // REFERENCE FROM A CONSTANT INTEGER
    /*
    int const j2 = 5;
    int &k2 = j2;
        we cannot do this bcoz jab j2 sirf file ko read kr skta hai usk khduk pas access nhi then vo uski copy kse send krega ki samne vala int read b kr le or wrrite bhi when self cannt  so we cannot do this
    measn ye ki j ka pas khudk pas access nh write krne ka then vo khud kse baat sktahai kisi ko or ki vo write access le ske iska PATH IS CONSTANT NOT STORAGE
        k2++;
        j2++;
    */

return 0;
}