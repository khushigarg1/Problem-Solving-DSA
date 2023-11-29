#include <bits/stdc++.h>

using namespace std;

int reduceToOneDigit(int val)
{
    int sum = 0;
    while (val > 0 || sum > 9)
    {
        if (val == 0)
        {
            val = sum;
            sum = 0;
        }
        sum += val % 10;
        val /= 10;
    }
    return sum;
}

void findBalancedCompound(string compound, int target)
{
    int val1 = 0, val2 = 0;

    // Calculate valencies of each element in the compound

    val1 = static_cast<int>(compound[0]);
    val2 = static_cast<int>(compound[1]);
    // cout << val1 << " " << val2 << endl;

    val1 = reduceToOneDigit(val1);
    val2 = reduceToOneDigit(val2);
    // cout << val1 << " " << val2;

    // // Check if it's possible to balance the compound
    map<pair<int, int>, pair<string, string>, greater<>> myMap;

    // for (int i = 1; i <= target / val1; ++i) {
    for (int i = target / val1; i >= 1; i--)
    {
        int multiple = target - (i * val1);
        if (multiple % val2 == 0)
        {
            int mult2 = multiple / val2;
            if (mult2 != 0)
            {
                myMap.emplace(make_pair(i, mult2), make_pair(string(1, compound[0]) + to_string(i), string(1, compound[1]) + to_string(mult2)));
            }
        }
    }

    if (!myMap.empty())
    {
        // cout << "Contents of the map:" << endl;
        for (const auto &entry : myMap)
        {
            cout << entry.second.first << " " << entry.second.second << endl;
        }
    }
    else
    {
        cout << "Not Possible" << endl;
    }
}

int main()
{
    string compound;
    int target;
    cin >> compound >> target;

    findBalancedCompound(compound, target);

    return 0;
}
