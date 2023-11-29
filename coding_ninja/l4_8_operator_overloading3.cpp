#include<bits/stdc++.h>
using namespace std;

class fraction{
    int numerator;
    int denominator;
    public:
        fraction(int numerator , int denominator){
            this-> numerator = numerator;
            this-> denominator = denominator;
        }
        void print(){
            cout << this-> numerator <<"/"<<this->denominator << endl;
        }

        void simplify(){
            int gcd = 1;
            int i = min(numerator , denominator);
            for(int j =1 ; j<=i ; j++){
                if( this->numerator %j==0 && this->denominator %j==0){
                    gcd = j;
                }
            }
            this-> numerator = this->numerator / gcd;
            this-> denominator = this-> denominator / gcd;
        }

        fraction add(fraction const &f2) const{
            int lcm = numerator * f2.denominator;
            int x = lcm/denominator;
            int y = lcm / f2.denominator;

            int num = x*this->numerator + y*f2.numerator;
            // numerator= num ;
            //  denominator = lcm;

            fraction fnew(num , lcm);
            fnew.simplify();
            return fnew;
        }

        fraction operator+(fraction const &f2){
            int lcm = numerator * f2.denominator;
            int x = lcm/denominator;
            int y = lcm / f2.denominator;

            int num = x*this->numerator + y*f2.numerator;
            // numerator= num ;
            //  denominator = lcm;

            fraction fnew(num , lcm);
            fnew.simplify();
            return fnew;
        }

        void multiply(fraction const &f2){
            this->numerator = numerator * f2.numerator;
            this-> denominator = denominator *f2.denominator;

            simplify();
        }

        fraction operator *(fraction const &f2) {
            this->numerator = numerator * f2.numerator;
            this-> denominator = denominator *f2.denominator;

            fraction fnew(this-> numerator , this-> denominator);
            fnew.simplify();
            return fnew;
        }

        bool operator == (fraction const &f2) const{
            return (f2.numerator == numerator && f2.denominator == denominator);
        }

        // void operator++(){
        //     numerator = numerator + denominator;
        //     simplify();
        //     // simplify by default this me call ho jayga 
        // }

//ASSIGNING ++ VALUE THAT IA RETURN TYPE 
        // fraction operator++(){
        //     numerator = numerator + denominator;
        //     simplify();

        //     return *this;
        //     //this me actually f1 ka address hai and vo point kr rha vo print krvana hai apnko to block ka content chathe hai apn to ki jo f3 ==++f1; ye hai to f1 ka pura content f3 me copy ho jaye esa chathe hai then we have to *this that will return whole block     return islye kra bcoz we want to assign value 
        // }

//NESTING
        // fraction operator++(){
        //     numerator = numerator + denominator;
        //     simplify();
// yha actual m ekya ho rha hai jab we do++(++f1) here f1 me ++ ho jayga and vo pphle f1 ki value jisme store this uski jgh ek temporary blockbnega usk bd ++ second vala bhi naya bnayga usi me change or copy hogi value f1 ki f3 me   nd so we want ki ye temporary copy na bnaye ek jo address hai usi me change ho sara      and apnne *this krne k bd apnne usko khi receive bhi nh kya ek br ++ hone k bd islye ye temporary copy bnayga      we want ki f1 m1 hi sb cahnge ho new copy na bane 
        //     return *this;
        // }

        fraction & operator++(){
            numerator =  numerator + denominator;
            simplify();

            return *this;
        }

        // POST INCREMENT
        fraction operator ++(int){
            fraction fnew(numerator , denominator);
            numerator = numerator + denominator;         //// by default this me hoga
            simplify();     // by default this me hoga
            fnew.simplify();
            return fnew;
        }

        // void operator +=(fraction const &f2){
        //     int lcm = numerator*denominator;
        //     int x = lcm/denominator;
        //     int y = lcm / f2.denominator;

        //     int num = x * numerator + y * f2.numerator;
        //     numerator = num;
        //     denominator = lcm;
        //     simplify();
        // }

        fraction& operator+=(fraction const &f2){
            int lcm = numerator*denominator;
            int x = lcm/denominator;
            int y = lcm / f2.denominator;

            int num = x * numerator + y * f2.numerator;
            numerator = num;
            denominator = lcm;
            simplify();
            return *this;
        }
};

int main(){
    fraction f1(10 , 3);
    fraction f2(5 , 2);
    f1.print();
    
    // fraction f3 = f1++;
    // f1.print();
    // f3.print();
    //POST INCREMENT ME NESTING ALLOW NAHI HAI 

    // f1 +=f2;
    // f1.print();
    // f2.print();
    // we cannot do nesting in this also bcoz abhi fxn void hai and apn usme value kse assign krenge islye fraction krkk *tis return krna hoga

    (f1 +=f2 ) +=f2;
    f1.print();
    f2.print();
    
return 0;
}

/*
post increment f1++;
int i = 5;
 i++;
  cout << i //6

  int i = 5 ;
  ++i;
  cout << i;       //6

  int i =5;
  int j = ++i;
  cout << i << j ;              // i =6  j =6

  int i =5;
  int j = i++;
  cout << i << j ;              // i = 6    j =5
 
*/