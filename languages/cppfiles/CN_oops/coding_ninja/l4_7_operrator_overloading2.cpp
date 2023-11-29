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
       /*
        fraction operator++(){
            numerator = numerator + denominator;
            simplify();
            return *this;
        }

// yha actual m ekya ho rha hai jab we do++(++f1) here f1 me ++ ho jayga and vo pphle f1 ki value jisme store this uski jgh ek temporary blockbnega usk bd ++ second vala bhi naya bnayga usi me change or copy hogi value f1 ki f3 me   nd so we want ki ye temporary copy na bnaye ek jo address hai usi me change ho sara      and apnne *this krne k bd apnne usko khi receive bhi nh kya ek br ++ hone k bd islye ye temporary copy bnayga      we want ki f1 m1 hi sb cahnge ho new copy na bane 
            
// if we co here return this then we dont want address of this that is address of f1 we want all content that presents in f1 so we ahve to do make it pointer thaht will points to all content 
*/

        fraction & operator++(){
            numerator =  numerator + denominator;
            simplify();

            return *this;
            // yha we will make reference fraction fxn so that new copy dont make nd fxn cange ek hi me hi  so here we will pass by reference   nd is case me copy nhi bnegi usi me call ho jyag
        }
};

int main(){
 
    fraction f1(10 , 2);
    fraction f2(15 , 4);

    f1.print();
    // ++f1;
    // f1.print();

    // fraction f3 = ++f1;
    // f1.print();
    // f3.print();

    fraction f4 = ++(++f1);
    f1.print();
    f4.print();



    // fraction f1(10 , 2);
    // fraction f2(15 , 4);

    // fraction f3 = f1.add(f2);
    // fraction f4 = f1 + f2;
    // f1.print();
    // f2.print();
    // f3.print();
    // f4.print();

    // fraction f5 = f1*f2;
    // f5.print();

    // if(f1 == f2){
    //     cout <<"equal";
    // }
    // else
    // cout << "not equal";
return 0;
}

/*
++ -> pre increment , post increment
int i = 5;
++i;
cout << i; //6

fraction f++; we wnat to do this;
fraction f3 = ++f1;
here f1 pass ho jayga thisme argument mepass krne ki need nh like f4 = f1+ f2 qnd f2 argument me jata tha or f1 this me pass 
fraction f1 = 3;
++f1;
cout << f1;
*/

/*
f3 = ++(++f1) like ab apna ye fxn hai apn chathe hai ki jo b result aaye f3 me chla jaye nad isk lye sbse phle kya hoga jo b f1 m evalue hai vo rkhi hogi usk upar ek f++ call hoga then f1 me ++ ho jayga and usk bad apn isko ksii me access nh kr rhe to ye ek temporary block bnayega and use apn buffer khte and isk bd jo b changes honge isk address me honge and ++(++f1)b ab isi me hoga and so f3 ki value to ho jagi shi but jo f1 hai usme sirf 6/1 hi rhega bcoz usk b dus block me kuch change hi nh hua so we will want 

ki we should ignore this temporary buffer block so we know ki jab hum chathe hai copy ko ignore krna nd usi me change rkna then we sue referenc variable so we will make fraction & jisse jonb change hoga f1 me hoga and uskki value alste me f3 me access ho jaygi
*/