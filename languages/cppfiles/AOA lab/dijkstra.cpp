#include <bits/stdc++.h>
using namespace std;

int mincost(int cost[], bool visited[], int m)
{
    int ans;
    int min = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        if (visited[i] == false && cost[i] <= min)
        {
            min = cost[i];
            ans = i;
        }
    }
    return ans;
}
int main()
{
    // int m;
    // cout << "enter matrix size : ";
    // cin >> m;
    // int matrix[m][m];
    int matrix[6][6] = {{0, 2, 4, 0, 0, 0}, {0, 0, 1, 7, 0, 0}, {0, 0, 0, 0, 3, 0}, {0, 0, 0, 0, 0, 1}, {0, 0, 0, 2, 0, 5}, {0, 0, 0, 0, 0, 0}};
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }
    int m = 6;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int cost[m];
    bool visited[m];
    // vector<int> cost;
    // vector<bool> visited;
    for (int i = 0; i < m; i++)
    {
        cost[i] = INT_MAX;
        visited[i] = false;
    }

    cost[0] = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     cout << cost[i] << " ";
    // }
    for (int i = 0; i < m - 1; i++)
    {
        int u = mincost(cost, visited, m);
        visited[u] = true;

        for (int v = 0; v < m; v++)
        {
            if (!visited[v] && matrix[u][v] && (cost[u] + matrix[u][v] < cost[v]))
            {
                cost[v] = cost[u] + matrix[u][v]; // relaxation condition
                // cout << cost[v] << " ";
            }
        }
        // cout << cost[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << cost[i] << " ";
    }
    return 0;
}

/*
    0  1  2  3  4  5

0   0  2  4  0  0  0
1   0  0  1  7  0  0
2   0  0  0  0  3  0
3   0  0  0  0  0  1
4   0  0  0  2  0  5
5   0  0  0  0  0  0
*/