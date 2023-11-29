/* operator overloading :- like we want to add any two fraction class but w cannot do this we only add integers doubles so we will use operator overloading to add fraction class    + operator ki functionality ko extend kr denge nd this process is called overloading 
*/
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

        fraction add(fraction const & f2) const{
            int lcm = this ->numerator * f2.denominator;
            int x = lcm /this->denominator;
            int y = lcm / f2.denominator;

            int num = x*this->numerator + y*f2.numerator;
            // numerator = num;
            // denominator = lcm ;

            fraction fnew(num , lcm);
            fnew.simplify(); 
            return fnew;
        }
        //here we r creation new fraction jisme num and lcm ki vlaue daaal rhe previously we was doing that values in f1 me dal rhe the 
        // rather than updating the frst frction just creating a new fraction nd return that new fraction nd we want fraction f4 = f1 + f2 ho jaye 


// fraction f4 = f1 + f2;
// f1 ka addres this m chla jayga and    f2 ka arguments m      and + operator overloading me
        fraction operator+ (fraction const & f2) const{
            int lcm = this ->numerator * f2.denominator;
            int x = lcm /this->denominator;
            int y = lcm / f2.denominator;

            int num = x*this->numerator + y*f2.numerator;
            // numerator = num;
            // denominator = lcm ;34

            fraction fnew(num , lcm);
            fnew.simplify(); 
            return fnew;
        }
// is fxn ko we can make constant bcoz we rnot changing any value of this nd all it can change ksii or k fxn me but apni property me nahi kar sakta jo ki ye nahi kar rha hai    and we r making new fraction and updating value in thaht fraction

        void multiply(fraction const &f2){
            numerator = numerator * f2.numerator;
            denominator = f2.denominator;

            simplify();
        }
        fraction operator * (fraction const &f2) const{
            int n = numerator * f2.numerator;
            int d = denominator * f2.denominator;

            fraction fnew (n, d);
            fnew.simplify();
            return fnew;
        }
        // fraction f3 = f1 * f2
        // f1ka address this m     nd f2 ka arument ki trh pass

        bool operator==(fraction const &f2) const{
            return (numerator == f2.numerator  &&  denominator == f2.denominator);
        }
};

int main(){
    fraction f1(10,2);
    fraction f2(15,4);

    fraction f3 = f1.add(f2);
    fraction f4 = f1 + f2;
    f1.print();
    f2.print();
    f3.print();
    f4.print();

    fraction f5 = f1 * f2;
    f5.print();

    if(f1==f2){
        cout <<"equal" <<endl;
    }
    else 
    cout <<"not equal" <<endl;
return 0;
}