#include <bits/stdc++.h>

using namespace std;

int calculateStringFactor(const string &x, const string &y, int S, int R)
{
    int minStringFactor = INT_MAX;

    for (int i = 0; i < y.length(); ++i)
    {
        for (int j = i; j < y.length(); ++j)
        {
            string sub = y.substr(i, j - i + 1);
            string revSub = sub;
            reverse(revSub.begin(), revSub.end());

            size_t found = x.find(sub);
            size_t revFound = x.find(revSub);

            if (found != string::npos || revFound != string::npos)
            {
                int subsFromY = (found != string::npos) ? 1 : 0;
                int subsFromRevY = (revFound != string::npos) ? 1 : 0;

                int totalSubs = subsFromY + subsFromRevY;
                int stringFactor = subsFromY * S + subsFromRevY * R;

                if (totalSubs < minStringFactor)
                {
                    minStringFactor = stringFactor;
                }
                else if (totalSubs == minStringFactor)
                {
                    minStringFactor = min(minStringFactor, stringFactor);
                }
            }
        }
    }

    return minStringFactor;
}

int main()
{
    string x, y;
    int S, R;

    cin >> x >> y >> S >> R;

    int minStringFactor = calculateStringFactor(x, y, S, R);

    if (minStringFactor == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minStringFactor << endl;
    }

    return 0;
}
