#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class complex{
    private :
        int real;
        int imaginary;
    public :
        complex(int real, int imaginary){
            this-> real = real;
            this-> imaginary = imaginary;
        }            
        void print(){
            cout << real <<" " << "+" <<" "<< imaginary <<"i" <<endl;
        }
        void add(complex c2){
            int r = this-> real + c2.real;
            int i = this-> imaginary + c2.imaginary;

            real = r;
            imaginary = i;
        }
};

int main(){
    complex c1(3,4);
    complex c2(2,1);
    c1.print();
    c2.print();

    c1.add(c2);
    c1.print();
    c2.print();

    c2.add(c1);
    c1.print();
    c2.print();
return 0;
}