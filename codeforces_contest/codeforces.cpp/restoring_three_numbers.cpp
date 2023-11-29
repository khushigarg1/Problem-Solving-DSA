#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i = 0 ; i <4  ; i++)
    {
        cin >> a[i];
    }
    sort(a, a+4);
    int c = a[3] - a[0];
    int b = a[2] - c;
    int a1 = a[3] - (b+c);
    cout << a1 <<" "<<b << " "<<c;
return 0;
}
