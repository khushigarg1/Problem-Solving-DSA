#include <iostream>
#include <string>
using namespace std;

pair<int, int> findValues(string ab)
{
    int n = ab.size();
    pair<int, int> p;
    p = make_pair(-1, -1);
    for (int lenA = 1; lenA < n; ++lenA)
    {
        string a_str = ab.substr(0, lenA);
        string b_str = ab.substr(lenA);

        if ((a_str.size() > 1 && a_str[0] == '0') || (b_str.size() > 1 && b_str[0] == '0'))
        {
            continue;
        }
        int a = stoi(a_str);
        int b = stoi(b_str);

        if (a > 0 && b > 0 && b > a)
        {
            p = make_pair(a, b);
        }
    }
    if (p.first != -1)
    {
        return p;
    }
    return {-1, -1};
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string ab;
        cin >> ab;

        pair<int, int> result = findValues(ab);

        if (result.first == -1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << result.first << " " << result.second << "\n";
        }
    }

    return 0;
}
