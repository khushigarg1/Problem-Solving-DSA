// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> matrix(n, vector<int>(m));
//     for (int i = 0; i < n; ++i)
//     {
//       for (int j = 0; j < m; ++j)
//       {
//         cin >> matrix[i][j];
//       }
//     }

//     int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     for (int i = 0; i < n; ++i)
//     {
//       for (int j = 0; j < m; ++j)
//       {
//         int maxNeighbor = INT16_MIN;
//         for (int d = 0; d < 4; ++d)
//         {
//           int ni = i + dir[d][0];
//           int nj = j + dir[d][1];
//           if (ni >= 0 && ni < n && nj >= 0 && nj < m)
//           {
//             maxNeighbor = max(maxNeighbor, matrix[ni][nj]);
//           }
//         }

//         matrix[i][j] = min(matrix[i][j], maxNeighbor);
//       }
//     }

//     for (int i = 0; i < n; ++i)
//     {
//       for (int j = 0; j < m; ++j)
//       {
//         cout << matrix[i][j] << " ";
//       }
//       cout << "\n";
//     }
//   }
//   return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> ind(m);
    for (int i = 0; i < m; i++)
    {
      cin >> ind[i];
    }
    string c;
    cin >> c;

    sort(c.begin(), c.end());
    sort(ind.begin(), ind.end());

    int j = 0;

    for (int i = 0; i < m; ++i)
    {
      s[ind[i] - 1] = c[j++];
      while (i + 1 < m && ind[i] == ind[i + 1])
      {
        ++i;
      }
    }

    cout << s << endl;
  }

  return 0;
}
