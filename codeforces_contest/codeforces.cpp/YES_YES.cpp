#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count = 0;
        if (str[0] == 'Y' || str[0] == 'y')
        {
            count++;
        }
        if (str[1] == 'e' || str[1] == 'E')
        {
            count++;
        }
        if (str[2] == 's' || str[2] == 'S')
        {
            count++;
        }
        if (count == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}