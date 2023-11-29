#include<bits/stdc++.h>
using namespace std;

class polynomialclass{
    int *degcoeff;
    int capacity;
    int nextdegcoeff;

    public:
        polynomialclass(){
            this-> capacity = 5;
            this-> degcoeff = new int [6];
            for(int i = 0 ; i <= capacity; i++){
                degcoeff[i] = 0;
            }
        }
        
        polynomialclass (int deg)
        {
            capacity = deg;
            degcoeff = new int[capacity + 1];
            for(int i = 0 ; i <= capacity ; i++)
            {
                degcoeff[i] = 0;
            }
        }

        polynomialclass (polynomialclass const & p){
            // this-> degcoeff = p.degcoeff;
            this-> capacity = p.capacity;
            this-> degcoeff = new int [p.capacity +1];
            for(int i =0 ; i <= p.capacity ; i++)
            {
                this->degcoeff[i] = p.degcoeff[i];
            }
        }

        void operator= (polynomialclass const & p){
            this-> capacity = p.capacity;
            int *newdegcoeff = new int[p.capacity + 1];
            for (int i = 0; i <= capacity; i++)
            {
                newdegcoeff[i] = p.degcoeff[i];
            }
            delete [] degcoeff;
            this-> degcoeff = newdegcoeff;
        }
        void print()
        {
            // if (dyCoff[0] != 0)
            // cout<<dyCoff[0]<<"x^"<<0<<" ";
            // bool flag = 0;
            bool flag = 0;
    
            for (int i = 1; i < capacity + 1; i++)
            {
                if (degcoeff[i] != 0 && flag)
                {
                    cout<< "+ "<< degcoeff[i] << "x^" << i << " ";
                }
                else if(degcoeff[i] != 0 && !(flag)){
                    cout<< degcoeff[i] << "x^" << i << " ";
                    flag = true;
                }
            }
                cout<<endl;
        }

        void setcoefficient(int deg , int coeff){
            if(deg > capacity){
                // int newcapacity = deg;
                // int d[newcapacity];

                int *newdegcoeff = new int[deg + 5];
                for(int i =0 ; i <= capacity  ; i++)
                {
                    newdegcoeff[i] = degcoeff[i];
                    // d[i] = i;
                }
                for(int i = capacity + 1 ; i < deg + 1 ; i++)
                {
                    newdegcoeff[i] = 0;
                }
                    delete [] degcoeff;
                    this->degcoeff = newdegcoeff;
            }
                degcoeff[deg] = coeff;
                this-> capacity = deg;
        }

        polynomialclass operator+ (polynomialclass const & p)
        {
            int updeg = max(this -> capacity , p.capacity);
        //upcappa is The higher degree to be set
            polynomialclass pnew(updeg);
            int lodeg = min(this -> capacity , p.capacity);
        //locappa is the lower degree among both
            int value;
            for (int i = 0; i <= lodeg; i++)
            {
                value = p.degcoeff[i] + this-> degcoeff[i];
                pnew.setcoefficient(i , value);
            }
            if(this->capacity == updeg)
            {
                for (int i = lodeg + 1; i < updeg + 1; i++)
                {
                    value = this ->degcoeff[i];
                    pnew.setcoefficient(i,value);
                }
            }
            else if(this-> capacity == lodeg)
            {
                for (int i = lodeg + 1; i < updeg + 1; i++)
                {
                    value = this ->degcoeff[i];
                    pnew.setcoefficient(i,value);
                }
            }
            return pnew;
        }

        polynomialclass operator- (polynomialclass const & p)
        {
            int updeg = max(this -> capacity , p.capacity);
        //upcappa is The higher degree to be set
            polynomialclass pnew(updeg);
            int lodeg = min(this -> capacity , p.capacity);
        //locappa is the lower degree among both
            int value;
            for (int i = 0; i <= lodeg; i++)
            {
                value = p.degcoeff[i] - this-> degcoeff[i];
                pnew.setcoefficient(i , ((-1)*value));
            }
            if(this->capacity == updeg)
            {
                for (int i = lodeg + 1; i < updeg + 1; i++)
                {
                    value = this ->degcoeff[i];
                    pnew.setcoefficient(i,((-1)*value));
                }
            }
            else if(this-> capacity == lodeg)
            {
                for (int i = lodeg + 1; i < updeg + 1; i++)
                {
                    value = this ->degcoeff[i];
                    pnew.setcoefficient(i,((-1)*value));
                }
            }
            return pnew;
        }

        polynomialclass operator* (polynomialclass const & p)
        {
            int updeg = p.capacity * this ->capacity;
            polynomialclass pnew(updeg);
            for (int i = 0; i < p.capacity + 1 ; i++)
            {
                for (int j = 0; j < this->capacity + 1; j++)
                {
                    pnew.degcoeff[i+j] += p.degcoeff[i] * this -> degcoeff[j];
                }
            }
            return pnew;
        }

    ~polynomialclass(){
        delete [] degcoeff;
    }
};

int main()
{
    polynomialclass p1;
    // p1.print();
    cout<<"hello 1\n";
    p1.setcoefficient(4,3);
    // p1.Printp();
    p1.setcoefficient(5,2);
    
    p1.setcoefficient(6,2);
    
    // p1.setCoff(8,2);

    // p1.setCoff(14,5);
    // p1.Printp();
    // p1.setCoff(16,5);
    p1.print();
    
    polynomialclass p2;
    p2 = p1;
    // p2.setCoff(16,8);
    p2.print();

    polynomialclass p3;
    p3 = p1 - p2;
    p3.print();
    
    polynomialclass p4;
    p4 = p1*p2;
    p4.print();
    
    cout<<"program ended succesfully";
return 0;
}