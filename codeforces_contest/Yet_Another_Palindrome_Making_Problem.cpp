#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
    for (long long i = 0; i < S.length() / 2; i++)
    {

        if (S[i] != S[S.length() - i - 1])
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        int temp = 0;
        for (long long i = 0; i < (n - 2); i++)
        {
            if (isPalindrome(s) == "Yes")
            {
                cout << "YES" << endl;
                temp = 1;
                break;
            }
            // swap(s[i], s[i + 2]);
            char flag = s[i];
            s[i] = s[i+2];
            s[i+2] = flag;
        }
        string ans;
        ans = isPalindrome(s);
        if (temp == 0)
        {
            if (ans == "Yes")
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}