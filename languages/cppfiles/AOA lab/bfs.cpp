#include <bits/stdc++.h>
using namespace std;
int visited[4] = {0, 0, 0, 0};

void bfs(int graph[4][4], int row)
{
    list<int> queue;
    visited[row] = true;
    queue.push_back(row);
    while (!queue.empty())
    {

        for (int i = 0; i < 4; i++)
        {
            if (graph[row][i] && !visited[i])
            {
                queue.push_back(i);
            }
        }
        
    }
}

int main()
{
    int graph[4][4] = {{0, 1, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 0}, {0, 0, 1, 0}};
    bfs(graph, 0);

    return 0;
}