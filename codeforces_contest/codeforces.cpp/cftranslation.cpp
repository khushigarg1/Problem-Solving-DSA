#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int i, j, l1, l2, count = 0;
    string s, t;
    cin >> s;
    cin >> t;
    l1 = s.length();
    l2 = t.length();
    for (i = 0, j = l2 - 1; i < l1,j>=0; i++, j--)
    {
        if (s[i] == t[j])
        {
            count++;
        }
    }
    if (count == l1)
        cout << "YES";

    else
        cout << "NO";

    return 0;
}