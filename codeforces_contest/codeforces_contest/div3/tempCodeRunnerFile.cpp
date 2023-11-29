#include <iostream>
using namespace std;

bool canMakeEqualThreadlets(int a, int b, int c)
{
    int sum = a + b + c;
    if (sum % 3 != 0)
    {
        return false;
    }

    if (2 * a > (b + c) || 2 * b > (a + c) || 2 * c > (a + b))
    // if (a > 2 * (b + c) || b > 2 * (a + c) || c > 2 * (a + b))
    {
        return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (canMakeEqualThreadlets(a, b, c))
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
