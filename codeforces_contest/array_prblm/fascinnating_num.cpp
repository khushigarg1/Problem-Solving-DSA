#include<bits/stdc++.h>
using namespace std;

int countdig(int n )
{
    int count=0;
    while(n!=0)
    {
        count++;
        n = n/10;
    }
    return count;
}
int main(){
    int n ;
    cin >> n;
    int second = n*2;
    int third = n*3;
    int concatnum = n;
    concatnum = pow(10 , countdig(second)) + second;
    concatnum = pow(10 , countdig(third)) + third;
    sort(concatnum.begin() , concatnum.end());
    for (int i = 1; i <= 9; i++)
    {
        /* code */
        
    }
    
return 0;
}