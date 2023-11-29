#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class fraction{
    private:
        int numerator;
        int denominator;
    public :
        fraction(int numerator , int denominator){
            this -> numerator = numerator;
            this -> denominator = denominator;
        }
        void printdata(){
            cout << this->numerator <<"/" << this-> denominator<<endl;
        }
        void simplify(){
            int gcd = 1;            //greatest common factor 
            int j = min(this->numerator , this-> denominator);
            for(int i=1 ;i<=j; i++){
                if(this->numerator %i ==0 && this->denominator% i ==0){
                    gcd = i;
                }
                this-> numerator = this->numerator / gcd;
                this-> denominator = this->denominator/gcd;
            }
        }
        void add(fraction f1){
            int lcm = f1.denominator * denominator;
            int x = lcm / f1.denominator;          
            int y = lcm / denominator;

            int num = (x*f1.numerator) + (y*numerator);
            numerator = num;
            denominator = lcm;

            simplify();
        }
};
int main(){
    fraction f1(10,2);
    fraction f2(15,4);

    f1.printdata();
    f2.printdata();

    f2.add(f1);
    f1.printdata();
    f2.printdata();

    f1.add(f1);
    f1.printdata();
    f2.printdata();

return 0;
}