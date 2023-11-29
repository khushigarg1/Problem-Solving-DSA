#include<bits/stdc++.h>
using namespace std;
// To represent a data point corresponding to x and y = f(x)
struct data{
    int x , y;
};

// function to interpolate the given data points using Lagrange's formula
// xi corresponds to the new data point whose value is to be obtained
// n represents the number of known data points
double interpolate(data f[] , int x , int n)
{
    double result = 0;

    for(int i =0 ; i < n ; i++)
    {
        double term = f[i].y;
        for(int j = 0 ; j < n ; j++)
        {
            if(j!=i){
                term = term* (x - f[j].x)/double (f[i].x - f[j].x);
            }
        }
        result += term;
    }
    return result;
}

int main(){
    // creating an array of 4 known data points
    data f[] = {{0,2} , {1,3} , {2,12} , {5,147}};

    // Using the interpolate function to obtain a data point
    // corresponding to x=3
    cout << "value of f(3) is "<< interpolate(f , 3 , 5);
    return 0;
}