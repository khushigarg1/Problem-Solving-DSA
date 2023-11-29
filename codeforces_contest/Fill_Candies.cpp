#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n , k , m;
        cin >> n >> k >> m;
        int multi = k*m;
        int div = n/multi;
        if(n%multi == 0)
        {
            cout << div << endl;
        }
        else
        {
            cout << div+1 << endl;
        }
    }
    
 
return 0;
}