#include<bits/stdc++.h>
using namespace std;

int numofzeros(int n)
{
    if(n<10)
    {
        if(n==0)
            return 1;
        else
            return 0;
    }
    int ans = numofzeros(n/10);
    if(n%10==0)
    {
        return ans+1;
    }
    else
    {
        return ans;
    }
}

int main(){
    int n ;
    cin >> n;
    cout << numofzeros(n);
return 0;
}