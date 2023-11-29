#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        cout << s;
        string s1 = "imrTu";
        int count =0;
        for(int i = 0 ; i < s.size();i++)
        {
            if(s[i] == s1[i])
            {
                count++;
            }
        }
        if(count == 5)
        {
cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}