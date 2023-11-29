#include <iostream>
// #include <vector>
// #include <string>
// #include <cmath>
// #include <stack>
// #include <algorithm>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    // int a = v1.dotproduct(v2);
    // cout << a << endl;

    // vector v1(3);
    // v1.arr[0] = 1.4;
    // v1.arr[1] = 3.3;
    // v1.arr[2] = 0.1;
    // vector v2(3);
    // v2.arr[0] = 0.1;
    // v2.arr[1] = 1.90;
    // v2.arr[2] = 4.1;
    // int a = v1.dotproduct(v2);             //yha apnne float me value le li or iska result shi nh aayga bczo apnne upr integer or float ki value 
    //integer me chnge krk ans dega is th se apnko sbki alg alg class bnannani pdegi int float char islye we will use template in this prgrm
    // cout << a << endl;
    
    
    vector <float>v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector <float>v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.dotproduct(v2);
    cout << a << endl;
    //ab apnne yha tempakte use kra or ye run ho jaayga is trh se upr Tme compiler ne kha abhi data type use krna hi nhi h me sb bd me bta dunga jo use krna hogA
    //yha amin me apn int f;loat double kuch b kr skte hai
    return 0;
}