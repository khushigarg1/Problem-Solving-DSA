#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long num)
{
    long long squareRoot = static_cast<long long>(sqrt(num));
    return squareRoot * squareRoot == num;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> buckets(n);
        long long totalSquares = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> buckets[i];
            totalSquares += buckets[i];
        }

        if (isPerfectSquare(totalSquares))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}