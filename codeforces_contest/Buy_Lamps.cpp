#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n , k , x , y;
        cin >> n >> k >> x >> y;
        int min = 0;
        int diff = n-k;
        int red = 0 , blue=0;
        if(y>x)
        {
            cout << n*x<<endl;
        }
        else
        {
            int sum = (diff*y) +(k*x);
            cout << sum << endl; 
        }

    }
    
 
return 0;
}