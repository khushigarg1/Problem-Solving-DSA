// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> v;
//     for (int i = 0; i < n; i++)
//     {
//         int n1, m;
//         cin >> n1 >> m;
//         pair<int, int> p = make_pair(n1, m);
//         v.push_back(make_pair(n1, m));
//         // cout << v[i].first << " " << v[i].second << endl;
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             // cout << v[i].first << " " << v[j].second << endl;
//             if (i != j && v[i].first == v[j].second)
//             {
//                 count++;
//             }
//         }
//     }
//     cout << count;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    string s4 = s1 + s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());
    if (s4 == s3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
