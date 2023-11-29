#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        int sum1 = a+b;
        int sum2 = c+d;
        if(sum1>=sum2)
        {
            cout << sum2<<endl;
        }
        else
        cout << sum1 << endl;
    }
    
 
return 0;
}