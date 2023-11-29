#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class fraction{
    int numerator;
    int denominator;
    public :
        fraction(int numerator , int denominator){
            this-> numerator = numerator;
            this-> denominator = denominator;
        }
        void print(){
            cout << this->numerator <<"/" <<this-> denominator <<endl;
            }

        void simplify(){
            int gcd = 1;
            int j = min(this->numerator , this->denominator);
            for(int i = 1 ; i <=j ; i++){
                if(this->numerator % i ==0 && this->denominator% i ==0){
                    gcd = i;
                }
            }
            this-> numerator = this-> numerator / gcd;
            this-> denominator = this-> denominator / gcd;

        }
// fraction f2 = main.f2 -> copy constructor
//if we want to avioid copy then use dereference variable
// fraction & f2 = main.f2 = ab yha new block nh bnega it will change value to go there same block ko  point  doesnot need to be made new block
// now we want ki sirf we read kr paye f2 ki value ko change nh kr paye then const fxn
        void add(fraction const & f2){
            int lcm = this ->numerator * f2.denominator;
            int x = lcm /this->denominator;
            int y = lcm / f2.denominator;

            int num = x*this->numerator + y*f2.numerator;
            numerator = num;
            denominator = lcm ;
            simplify();
        }

        void multiply(fraction const &f2){
            numerator = numerator * f2.numerator;
            denominator = f2.denominator;

            simplify();
        }
};

int main(){
    fraction f1(10,2);
    fraction f2(15,4);

    f1.print();
    f2.print();

    f1.add(f2);
    f1.print();
    f2.print();
              
    f2.add(f1);
    f1.print();
    f2.print();

    f1.multiply(f2);
    f1.print();
    f2.print();
    
return 0;
}