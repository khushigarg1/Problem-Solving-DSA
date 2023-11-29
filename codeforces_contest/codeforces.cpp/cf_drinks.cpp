#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i,n,a;
    cin>>n;
    double ans = 0.0,sum =0.0;
    for(i=1;i<=n;i++)
    {
        cin>>a ;
        sum+=a;
    }
    ans = sum/n;
    cout <<fixed << setprecision(12) <<ans << endl;
return 0;
}