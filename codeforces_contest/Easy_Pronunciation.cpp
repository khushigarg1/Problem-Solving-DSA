#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int conso = 0;
        int vowel = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (conso >= 4)
            {
                break;
            }
            else if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
            {
                conso = 0;
            }
            else
            {
                conso++;
            }
        }
        if (conso >= 4)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}