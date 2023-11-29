#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int max(int a, int b){
    return a>b? a: b;
} 

inline int max1 ( int a, int b){
    return a > b ? a : b;
}

int main(){
    int a,b;

    //we can do it by tertiary operator 
    int c = a>b ? a : b;    // it is nota good code bcoz we have to stop every second ki yekrta kya hia yadi a b s ebda then ye nd then vo
    int x, y;
    x = 12;
    y = 13;
    int z = a> b ? a : b;

    int c = max(a,b);  // everytime ye 2 var call honge copy honge upr jange performation me time hoga hat aayega 
    int z = max(x,y);
    
    int c = max(a,b);
    int z = max(x,y);   //as soon as we had use inline then jo fxn ki copy hai vo wha se uth kr main fxn me is jgh aa jayegi compiler willl do it 

    // we canot do use of inline fxn bcoz if we copy evry wheer then ouput file will become bulky inlinemeans only we r giving hint to the compiler its uski wish
 
return 0;
}