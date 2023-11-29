#include<bits/stdc++.h>
using namespace std;
class calc{
    int digit1;
    int digit2;
    public:
        calc(int one , int two){
            digit1 = one;
            digit2 = two;
        }
        calc operator+(calc const & c2){
            int x = digit1 + c2.digit2;
            
        }
};
int main(){
    int x , y;
    cin >> x >> y;
    calc c1(x,y);
return 0;
}