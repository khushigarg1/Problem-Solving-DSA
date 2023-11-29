#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        string s(a);
        cin >> s;
        // for (int i = 0; i < a; i++)
        // {
        //     cin >> s[i];
        // }
 
        sort(s.begin(), s.end());
        
        int count = 2;
        for (int i = 1; i < a; i++)
        {
            cout << s[i-1];
            if (s[i] != s[i - 1])
            {
                count += 2;
            }
            else
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
 
    return 0;
}