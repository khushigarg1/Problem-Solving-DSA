#include <iostream>
using namespace std;
//int glo=6;                  //global variable
/*void sum ()
{
    int a; ---------------------------->local variable
    cout<<glo;                   
}*/
//local and global variable same namr se bn skte h but precidence local var lega
int main()
{
    int a = 14, b = 10;
    float PI = 3.14;
    char d = 'b';
 /*      sum();
  cout<<glo;
    int glo=9;      //ab apn yha ydi glo =9 kr enge then 9 print hoga 6 ki jgh bcoz LV precidence
    glo=78;          //or yha local variable update ho jayga  78 print
    //local variable and global variABLE SAME  name k bn skte hai but precodence global vaiable ko milega
*/

    //bool is_true=true;
    //cout<<glo<<is_true;;                             then it prints 1 for true and 0 for false
    cout << "\n the value of a is" << a << "\n the value of b is " << b;
    cout << "\n the value of pi is" << PI;
    cout << "\n the value of d is" << d;
    return 0;
}