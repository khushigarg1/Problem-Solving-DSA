#include<bits/stdc++.h>
using namespace std;

class fraction {
    private:
        int numerator;
        int denominator;
    public :
        fraction(){

        }

        fraction(int numerator , int denominator){
            this-> numerator = numerator;
            this-> denominator = denominator;
        }

        // void setnumerator (int n) const we cannot do this bcoz is fxn k andr value change ho rhi 
        void setnumerator (int n) {
            numerator = n;
        }
        int getnumerator () const{
            return numerator;
        }

        void setdenominator(int d){
            denominator = d;
        }
        int getdenominator () const{
            return denominator;
        }

        void print (){
            cout << this->numerator <<"/" <<this->denominator <<endl;
        }

        void simplify(){
            int gcd = 1;
            int i = min(this-> numerator , this-> denominator);
            for(int j=1 ; j <=i ; j++){
                if(this -> numerator % j == 0 && this -> denominator % j == 0)
                {
                    gcd = i;
                }
            }
            this-> numerator = this-> numerator / gcd;
            this-> denominator = this->denominator / gcd;
        }

        void add(fraction const & f2){
            int lcm = numerator * f2.denominator;
            int x = lcm / this->denominator;
            int y = lcm / f2.denominator;

            int num = x*numerator + y* f2.denominator;

            numerator = num;
            denominator = lcm;
            simplify();
        }

        void multiply(fraction const &f2){
            numerator = numerator * f2.numerator;
            denominator = denominator * f2.denominator;

            simplify();
        }
};

int main(){
    fraction f1(10 , 2);
    fraction f2(15 , 4);

    // fraction const f3;   we can write this also 
    const fraction f3;   // we cannot change in f3 object so it want ki jis fxn ko ye call kr vo b constant fxn ho 

    // cout << f3.getnumerator <<"/" <<f3.denominator <<ednl;
    // cout << f3.setnumerator(10) << f3.setdenominator(11) <<ednl;
    // upar ki dono line error degi bcoz setnumerator to hai hi shi bcoz ye constant fxn me value change but get vali line bhi bcoz ye jiisnfxn ko call kr rha hai us fxn me to value change ho skti hai f3 object ki or apn esa bilkul nhi chathe so fxn should be constant 
    // constant fxn are those thaht cannot change the any value in object property 


    
    cout << f3.getnumerator() <<"/" <<f3.getdenominator() <<endl;
    // f3.setnumerator(10);
    // f3.setdenominator(11);   is vali line me abhi bhi error aayga bcoz numerator me apn 10 , 11 nhi dal sktey evalue change kr rhi hai nd we cannot make constant fxn to setnumber fxn ko 

    // constant fxn vahi ban skte hai jo fxn me kuch change na kar sake 
return 0;
}