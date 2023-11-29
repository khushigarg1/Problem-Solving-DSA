#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    vector <int> mark(26,0);
    int count =0;
    int index;
    int flag = 0;

    for(int i = 0; i < s.length();i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
            index = s[i] - 'A';
        else if('a' <= s[i] && s[i] <= 'z')
            index = s[i] - 'a';
        else{
            continue;
        }

        mark[index] = 1;
    }
    for(int i = 0; i <= 25; i++)
    {
        if(mark[i] == 1)
        {
            count++;
        }
    }
    cout << count<<endl;
    return 0;
}