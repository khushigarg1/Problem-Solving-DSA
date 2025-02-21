#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool dfs(int x, int y, int parent_x, int parent_y, int row, int col, vector<vector<char>> &mat, vector<vector<bool>> &visited)
{
  visited[x][y] = true;
  for (int i = 0; i < 4; i++)
  {
    int nx = dx[i] + x;
    int ny = dy[i] + y;

    if (nx >= 0 && ny >= 0 && nx < row && ny < col)
    {
      if (nx == parent_x && ny == parent_y)
      {
        continue;
      }
      if (mat[x][y] == mat[nx][ny])
      {
        if (visited[nx][ny])
        {
          return true;
        }
        if (dfs(nx, ny, x, y, row, col, mat, visited))
        {
          return true;
        }
      }
    }
  }
  return false;
}

int main()
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
      if (!visited[i][j])
      {
        if (dfs(i, j, -1, -1, n, m, mat, visited))
        {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}