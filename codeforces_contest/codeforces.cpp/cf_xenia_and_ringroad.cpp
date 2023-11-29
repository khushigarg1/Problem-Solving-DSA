#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,m , ele, start = 1;
    cin >> n >> m;
    long long int ans = 0;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> ele;
        if(ele >= start)
        {
            ans = ans + (ele - start);
        }
        else{
            ans = ans + ((n + ele)- start);
        }
        start = ele;
    }
    cout << ans;
return 0;
}

