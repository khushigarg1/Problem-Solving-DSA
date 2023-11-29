#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    for(int i = 0 ; i < str.length(); i++)
    {
        if(str[i] !='A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'Y' && str[i] != 'y')
        {
            if(str[i] <= 'Z')
            {
                str[i] +=32;
            }
            cout << "."<<str[i];
        }
    }
    cout << endl;
return 0;
}