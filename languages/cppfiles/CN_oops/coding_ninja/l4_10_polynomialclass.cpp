#include<bits/stdc++.h>
using namespace std;

class polynomialclass{
    int *degcoeff;
    int capacity;
    int nextdegcoeff;

    public:
        polynomialclass(){
            this-> degcoeff = new int [6];
            this-> capacity = 5;
            for(int i = 0 ; i <= capacity; i++){
                degcoeff[i] = 0;
            }
        }

        void setcoefficient(int deg , int coeff){
            if(deg > capacity){
                int newcapacity = deg;
                int d[newcapacity];

                int *newdeg = new int[newcapacity + 1];
                for(int i =0 ; i <= newcapacity ; i++)
                {
                    newdeg[i] = degcoeff[i];
                    d[i] = i;
                }
                    delete [] degcoeff;
                    this->degcoeff = newdeg;
                    this-> capacity = newcapacity;
                    degcoeff[deg] = coeff;
            }
            else{
                degcoeff[deg] = coeff;
            }
        }

        void print(){
            for(int i = 0 ; i <= this->capacity ; i++){
                if(degcoeff[i] != 0)
                {
                    cout << degcoeff[i] <<"x^" <<i <<" " ;
                    if(i!= this-> capacity){
                        cout <<"+ ";
                    }
                }
            }
            cout <<endl;
        }

        polynomialclass (polynomialclass const & p){
            // this-> degcoeff = p.degcoeff;
            this-> capacity = p.capacity;

            this-> degcoeff = new int [p.capacity +1];
            for(int i =0 ; i <= p.capacity ; i++){
                this->degcoeff[i] = p.degcoeff[i];
            }
        }

        polynomialclass (int capacity){
            this-> degcoeff = new int[capacity + 1];
            this-> capacity = capacity;
        }

        int degree(){
            int d[this-> capacity +1];
            for(int i =0 ; i <= capacity ;i++){
                if(degcoeff[i] != 0)
                {
                    d[i] = i;
                }
            }
        }

        polynomialclass operator+ (polynomialclass const & p){
            int j = this->capacity + p.capacity;
            polynomialclass p3(j);

            for(int i = 0 ; i <= j; i++)
            {
                // if(i<=capacity && i <=p.capacity){
                // p3.degcoeff[i] = this-> degcoeff[i] + p.degcoeff[i];
                // }
                // else if(i<=capacity)
                // {
                //     p3.degcoeff[i] = degcoeff[i];
                // }
                // else{
                //     p3.degcoeff[i] = p.degcoeff[i];
                // }
                
            }
        }

        polynomialclass operator- (polynomialclass const & p){
            
        }

        polynomialclass operator* (polynomialclass const & p){
            int j = this-> capacity + p.capacity;
            polynomialclass p3(j);
            for(int i =0 ; i <= j ; i++)
            {
                p3.degcoeff[i] += this->degcoeff[i] * p.degcoeff[i];
            }
        }

        void operator= (polynomialclass const & p){
            int *newdegcoeff = new int[p.capacity + 1];
            for (int i = 0; i <= p.capacity; i++)
            {
                newdegcoeff[i] = p.degcoeff[i];
            }
            this-> degcoeff = newdegcoeff;
            this-> capacity = p.capacity;
        }
};

int main(){
    polynomialclass p1;
    p1.setcoefficient(1,2);
    p1.setcoefficient(3,3);
    p1.setcoefficient(6,4);

    p1.print();

    polynomialclass p2;
    p2.setcoefficient(2,1);
    p2.setcoefficient(3,3);
    p2.setcoefficient(5,4);
    p2.print();

    polynomialclass p3 = p1+ p2;
    p3.print();
return 0;;
}