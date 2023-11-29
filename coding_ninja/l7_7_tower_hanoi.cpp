#include<bits/stdc++.h>
using namespace std;
void tow (int n , char S , char A , char D)
{
    if(n==1)
    {
        cout << "disk " << n <<" moves from : "<< S << " --> "<< D <<endl;
        return ;
    }
    tow(n-1 , S , D , A);
        cout << "disk " << n <<" moves from : "<< S << " --> "<<D <<endl;
    tow(n-1 , A , S , D);
}
int main(){
    int n ;
    cin >> n ;
    cout <<endl;
    tow (n , 's' , 'a', 'd');
    // s = source 
    // a  auxillary
    // d= destination
return 0;
}