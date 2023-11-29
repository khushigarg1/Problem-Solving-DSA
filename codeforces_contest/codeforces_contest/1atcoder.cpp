#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int ans = 0;
//     bool flag = false;
//     while (!flag && N <= 919)
//     {
//         int temp = N;
//         int c = temp % 10;
//         temp /= 10;
//         int b = temp % 10;
//         temp /= 10;
//         int a = temp;
//         cout << a << " " << b << " " << c << endl;
//         if (a * b == c)
//         {
//             ans = N;
//             flag = true;
//             break;
//         }
//         N++;
//     }
//     cout << ans;
//     return 0;
// }

int findans(int i, int j, string A, string B, vector<vector<int>> &dp, string &s)
{
    cout << s << endl;
    if (s == B)
    {
        return 1;
    }
    if (i >= A.length() && s != B)
    {
        return 0;
    }
    s += A[i];
    int take = findans(i + 1, j, A, B, dp, s);
    s.pop_back();
    int nontake = findans(i + 1, j, A, B, dp, s);
    return take + nontake;
}

int numDistinct(string A, string B)
{
    vector<vector<int>> dp(A.length() + 1, vector<int>(B.length() + 1, -1));
    string s = "";
    s += A[0];
    int ans = findans(1, B.length() - 1, A, B, dp, s);
    return ans;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << numDistinct(a, b);
    return 0;
}