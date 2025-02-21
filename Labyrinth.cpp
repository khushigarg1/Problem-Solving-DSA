#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<char>> mat(n, vector<char>(m));
  int sx = -1, sy = -1, dx = -1, dy = -1;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
      if (mat[i][j] == 'A')
      {
        sx = i;
        sy = j;
      }
      if (mat[i][j] == 'B')
      {
        dx = i;
        dy = j;
      }
    }
  }

  vector<vector<int>> visited(n, vector<int>(m, false));
  vector<vector<int>> prevstep(n, vector<int>(m));
  int dirx[] = {0, 0, -1, 1};
  int diry[] = {-1, 1, 0, 0};
  int dir[] = {'L', 'R', 'U', 'D'};
  queue<pair<int, int>> q;

  q.push(make_pair(sx, sy));
  while (!q.empty())
  {
    auto node = q.front();
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      int x = node.first + dirx[i];
      int y = node.second + diry[i];
      if (x >= 0 && y >= 0 && x < n && y < m && !visited[x][y] && mat[x][y] != '#')
      {
        visited[x][y] = true;
        q.push(make_pair(x, y));
        prevstep[x][y] = i;
      }
    }
  }
  if (visited[dx][dy] == true)
  {
    cout << "YES" << endl;
    string directionstring = "";
    while (dx != sx || dy != sy)
    {
      int p = prevstep[dx][dy];
      directionstring += dir[p];
      dx -= dirx[p];
      dy -= diry[p];
    }
    reverse(directionstring.begin(), directionstring.end());
    cout << directionstring.size() << endl;
    cout << directionstring << endl;
  }
  else
    cout << "NO" << endl;
  return 0;
}
