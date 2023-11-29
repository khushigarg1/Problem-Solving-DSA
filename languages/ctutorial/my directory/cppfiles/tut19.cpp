#include<iostream>
using namespace std;

/*--------------------function over loading----------------*/
int sum(int a, int b)            //yadi yha float a likhte tab bhi vo integer m chng krvdega bcon main m int h
{
    cout<<"using fxn with 2 arguments "<< endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"using fxn with 3 arguments "<< endl;
    return a+b+c;
}

//calculate the volume of cylinder
int volume(double r,int h)
{
    return(3.14 * r*r*h);
}

//volume of a cube
int volume(int a)
{
    return a*a*a;
}

//volume of a rrctangular box
int volume (int l,int b, int h)
{
    return(l*b*h);
}

int main()
{
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;    
    cout<<"the sum of 3 ,7 and 6 is "<<sum(3,7,6)<<endl;    
    cout<<"the volume of rectangular box of 3 ,7 and 6 is "<<volume(3,7,6)<<endl; 
    cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl; 
    cout<<"the volume of cube of side 3 "<< volume(3)<<endl; 
return 0;
}