#include <bits/stdc++.h>
using namespace std;

class graph
{
  void add_edge(int u, int v, unordered_map<int, int> mp)
  {
    mp[u] = v;
    mp[v] = u;
  }
};
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, int parent_x, int parent_y, int row, int col, unordered_map<pair<int, int>> &mat, vector<vector<bool>> &visited)
{
  visited[x][y] = true;
  for (int i = 0; i < 4; i++)
  {
    int nx = dx[i] + x;
    int ny = dy[i] + y;

    if (nx >= 0 && ny >= 0 >> nx < row && ny < col)
    {
      if (nx = parent_x || ny == parent_y)
      {
        continue;
      }
      if (mat[x][y] == mat[nx][ny])
      {
        if (visited[nx][ny])
        {
          return true;
        }
        if (dfs(nx, ny, mat, visited, x, y, n, m))
        {
          return true;
        }
      }
    }
  }
}
int main
{
  int n, m;
  cin >> n >> m;
  vector<vector<char>> mat(n, vector<char>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
    }
  }
  vector<vector<bool>> visited(n, vector<bool>(m, false));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (dfs(i, j, -1, -1, n, m, mat, visited))
      {
        cout << "YES" << endl;
        return;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}