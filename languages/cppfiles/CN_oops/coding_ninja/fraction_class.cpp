#include<bits/stdc++.h>
using namespace std;

class fraction {
    private:
        int numerator;
        int denominator;
    public :
        fraction (int numerator , int denominator){
            this-> numerator = numerator;
            this-> denominator = denominator;
        }
        void printdata()const {
            cout << this->numerator <<"/" <<this->denominator <<endl;
        }
        void simplify(){
            int gcd = 1;
            int j = min(this->numerator , this-> denominator);
            for(int i = 1 ; i <= j ; i++){
                if(this->numerator %i==0 && this->denominator %i==0){
                    gcd = i;
                }
            }
            this->numerator = this->numerator/gcd;
            this->denominator = this->denominator / gcd;
        }
        fraction add(fraction const & f2) const {
            int lcm = this-> denominator * f2.denominator;
            int x = lcm/this->denominator;
            int y = lcm /f2.denominator;
            int num = x*this->numerator + y*f2.numerator;
            // this->numerator = num;
            // this-> denominator = lcm;
            fraction fnew(num ,lcm);
            fnew.simplify();
            return fnew;
        }
        fraction multiply(fraction const& f2){
            int num = numerator * f2.numerator;
            int lcm = denominator* f2.denominator;
            fraction fnew(num , lcm);
            fnew.simplify();
            return fnew;
        }
        fraction operator + (fraction const & f2)const{
            int lcm = this-> denominator * f2.denominator;
            int x = lcm/this->denominator;
            int y = lcm /f2.denominator;
            int num = x*this->numerator + y*f2.numerator;
            // this->numerator = num;
            // this-> denominator = lcm;
            fraction fnew(num ,lcm);
            fnew.simplify();
            return fnew;
        }
        fraction operator++ (){
            this-> numerator = this-> numerator + this-> denominator;
            simplify();
            return *this;
        }

        fraction operator* (fraction const & f2)const {
            int lcm =  denominator * f2.denominator;
            int num = numerator * f2.numerator;
            // this-> numerator = num;
            // this-> denominator = lcm;
            fraction fnew(num , lcm);
            fnew.simplify();
            return fnew;
        }

        fraction & operator+=(fraction const & f2){
            int lcm = this-> denominator * f2.denominator;
            int x = lcm/this->denominator;
            int y = lcm /f2.denominator;
            int num = x*this->numerator + y*f2.numerator;
            this->numerator = num;
            this-> denominator = lcm;
            simplify();
            return *this;
        }
};

int main(){
    fraction f1(8,4);
    fraction f2(10,2);

    fraction f3 = f1.add(f2);
    // f1.printdata();
    // f2.printdata();
    // f3.printdata();

    // fraction f4 = f1.multiply(f2);
    fraction f4 = f1 + f2;
    f1.printdata();
    f2.printdata();
    f3.printdata();
    f4.printdata();

    fraction f5 = f1*f2;
    f5.printdata();

    fraction f7 = (f1+=f2);
    f1.printdata();
    f2.printdata();
    f7.printdata();

    (f1+=f2) +=f2;
    f1.printdata();
    f2.printdata();

    fraction f8 = f1+=(f1+=f2);
    f8.printdata();
    f1.printdata();

    const fraction f9(10,2);
    f9.printdata();
return 0;
}