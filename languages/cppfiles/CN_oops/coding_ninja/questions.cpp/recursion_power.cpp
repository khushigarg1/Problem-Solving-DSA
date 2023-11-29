#include<bits/stdc++.h>
using namespace std;

long int power(int dig ,int pow){
    if(pow==0 || dig==1){
        return 1;
    }
    else if(pow<0){
        return -1;
    }
    int res = power(dig,pow-1);
    return dig * res;
}

int main(){
    int x , n;
    cin >> x >> n;
    cout << x  <<" ^ "<< n <<" = ";
    long int output = power(x,n);
    cout << output <<endl;

return 0;
}