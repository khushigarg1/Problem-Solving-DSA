#include <iostream>
#include <algorithm>
using namespace std;

bool canMakeEqualThreadlets(int a, int b, int c)
{
    // Sort the lengths in ascending order.
    int lengths[3] = {a, b, c};
    sort(lengths, lengths + 3);

    // Check if it's possible to make all threadlets equal.
    if (lengths[0] + lengths[1] == lengths[2] || lengths[0] + lengths[1] + lengths[0] + lengths[1] == lengths[2] ||
        lengths[0] + lengths[1] + lengths[0] == lengths[2] || lengths[0] + lengths[1] + lengths[1] == lengths[2] ||
        lengths[0] + lengths[1] + lengths[0] + lengths[0] == lengths[2] ||
        lengths[0] + lengths[1] + lengths[1] + lengths[1] == lengths[2])
    {
        return true;
    }

    return false;
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
