/*--------------FUNCTION TEMPLATES---------*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

// float funcaverage(int a, int b)
// {
// //    float avg = (a+b )/2;    //integer/ integer integer aayga
//       float avg = (a+b )/2.0 ;
//       return avg;
// }

// float funcaverage2(int a, float b)
// {
//     float avg = (a+b )/2.0 ;
//     return avg;
// }      we can make templat instead of making many fxns

template <class t1, class t2>
float funcaverage(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
//ab apn kisi b data type k number ka average nikal skte hai sirf template declare krk kam lines of code meye kam ho jayga

/*--------SWAPPING TWO NUMBERS ------*/
template <class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    //a = funcaverage(5,2);
    //printf("the average of these numbers is %.3f",a);
    //a = funcaverage2(5,2);

    a = funcaverage(5, 2);
    //a=funcaverage(5,2.4);
    cout << a << endl;

    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl << y;
    return 0;
}