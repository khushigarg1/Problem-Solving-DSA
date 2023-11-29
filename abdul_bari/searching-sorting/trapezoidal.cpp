#include<bits/stdc++.h>
using namespace std;

// A sample function whose definite integral's
// approximate value is computed using Trapezoidal rule
float y (float x)
{
    
    // Declaring the function f(x) = 1/(1+x*x)
    return 1/ (1+x*x);
}

float trapezoidal (float a , float b , float n)
{  
    // Grid spacing
    float h = (b-a)/n;
    
    // Computing sum of first and last terms
    // in above formula
    float s = y(a) + y(b);
    // Adding middle terms in above formula
    for(int i = 1 ; i < n ; i++)
    {
        s += 2*y(a + i*h);
    }

    // h/2 indicates (b-a)/2n. Multiplying h/2
    // with s.
    return (h/2)*s;
}
int main(){
    float x0 = 0;
    float x1 = 1;

// Number of grids. Higher value means
    // more accuracy
    int n = 6;

    cout << "value of integral is "<< trapezoidal(x0 , x1 , n);
return 0;
}

/*
f(x)dx = b-a/2n [f(a) + 2{f(a + ih)} + f(b)]
a to b                     i=1 to n-1
*/