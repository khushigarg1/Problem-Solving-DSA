#include<bits/stdc++.h>
using namespace std;
int main(){
    string s , b="hello";
    cin >> s;
    int count = 0, j = 0;
    for(int i = 0 ; i < s.length(); i++)
    {
        if( s[i]==b[j])
        {
            count++;
            j++;
            if(count == 5)
            {
                break;
            }
        }
    }
    if(count==5)
    {
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}