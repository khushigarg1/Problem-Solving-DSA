#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.0001

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2  + 2
double func(double x)
{
    // return x*x*x - x*x + 2;
    return x*pow(exp(1) , x) - 3*x - 2;
}
 
// Prints root of func(x) with error of EPSILON
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }
 
    double c = a;
    while ((b-a) >= EPSILON)
    {
        // Find middle point
        c = (a+b)/2;
 
        // Check if middle point is root
        if (func(c) == 0.0)
            break;
 
        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

int main(){
    double a , b ;
    cout << "a or b any one should be negative and other positive";
    cin >> a>> b;
    bisection(a , b);
return 0;
}


/*
epsilon = 0.01
x*x*x + x*x +2
    c = a;
void bisection(double a , double b)
{
    if(func(a)*func(b) >= 0)
    cout << wrong assumption

    else
    while b-a >= epsilon
    c = a+b/2;
    if func(c)*fnc(a) < 0
        b = c;
    else
         a = c;
}
*/