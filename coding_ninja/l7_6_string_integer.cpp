#include<bits/stdc++.h>
using namespace std;

int str_int(string str  )
{
    if(str.length() ==1)
    {
        int a = str[0] - 48;
        return a;
    }
    int b = str[0] - 48 ;
    int a = str_int(str.substr(1));
    return b * (pow(10, str.length() -1)) + a;
}
int main(){
    string str;
    cin >> str;
    int len = str.length();
    int a = str_int(str );
    cout << a;
return 0;
}