#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    // transform(s.begin(), s.end(), s.begin(), ::toupper);
    vector<int> hash(26,0);
    int flag =1;
    int index;
    for(int i =0; i < s.length();i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
            index = s[i] - 'A';
  
        else
            index = s[i] - 'a';
  
        hash[index] = 1;
    }
    for(int i = 0; i <=25 ;i++)
    {
        if(hash[i] ==0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "NO" <<endl;
    }
    else
    {
        cout <<"YES"<<endl;
    }
    return 0;
}