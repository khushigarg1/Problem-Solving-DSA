#include <bits/stdc++.h>
using namespace std;
int visited[4] = {0, 0, 0, 0};

void dfs(int graph[4][4], int row, int &count)
{
    int i;
    visited[row] = 1;
    for (i = 0; i < 4; i++)
    {
        if (graph[row][i] && !visited[i])
        {
            cout << row << " --> " << i << endl;
            count++;
            dfs(graph, i, count);
        }
    }
}

int main()
{
    // int graph[4][4] = {{0, 1, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 0}, {0, 0, 1, 0}};
    int graph[4][4] = {{0, 1, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    // vector<vector<int>> vec;
    int count = 1;
    dfs(graph, 0, count);

    if (count == 4)
    {
        cout << "connected" << endl;
    }
    else
    {
        cout << "dsiconnected" << endl;
    }
    return 0;
}