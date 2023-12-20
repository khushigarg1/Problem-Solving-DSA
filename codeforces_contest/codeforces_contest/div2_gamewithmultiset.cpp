#include <bits/stdc++.h>
using namespace std;

bool isSubsetSumPossible(multiset<int> &s, int target)
{
    unordered_set<int> sums;
    sums.insert(0);

    for (int num : s)
    {
        vector<int> newSums;
        for (int sum : sums)
        {
            int newSum = sum + num;
            if (newSum <= target)
            {
                newSums.push_back(newSum);
            }
        }
        for (int newSum : newSums)
        {
            sums.insert(newSum);
        }
    }

    return sums.count(target);
}

int main()
{
    int m;
    cin >> m;

    multiset<int> mySet;
    while (m--)
    {
        int t, v;
        cin >> t >> v;

        if (t == 1)
        {
            mySet.insert(1 << v);
        }
        else
        {
            int target = v;
            if (isSubsetSumPossible(mySet, target))
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
