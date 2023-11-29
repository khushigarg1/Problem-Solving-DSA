 numin = int(input())
 graph = {}
 def add_node(u, v):
     graph[u].append(v)
 for i in range(numin):
     num1 = int(input())
     graph[num1] = []
 edges = int(input())
 for i in range(edges):
     u, v = map(int, input().split())
     add_node(u, v)
 start = int(input())
 end = int(input())
 traversal = []
 traversal.append(start)
 def traverse(graph, node):
     for neighbor in graph[node]:
         if neighbor == end:
             return
         if len(graph[node]) == 0:
             return
         else:
             traversal.append(neighbor)
             traverse(graph, neighbor)
 traverse(graph, start)
 traversal = sorted(traversal)
 for node in traversal:
     print(node, end=" ")

// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<int, int>> graph[1000001];

// int main()
// {
//     int num;
//     cin >> num;
//     cout << "Input number is " << num << endl;
//     unordered_map<int, int> mapp;
//     for (int i = 0; i < num; ++i)
//     {
//         int node;
//         cin >> node;
//         mapp[node] = INT_MAX;
//     }
//     int m;
//     cin >> m;
//     for (int i = 0; i < m; ++i)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         graph[u].push_back({v, w});
//     }
//     int source, destin;
//     cin >> source >> destin;
//     set<pair<int, int>> pq;
//     mapp[source] = 0;
//     pq.insert({0, source});
//     while (!pq.empty())
//     {
//         pair<int, int> p = *(pq.begin());
//         pq.erase(pq.begin());
//         int mapsec = p.second;
//         for (auto it = graph[mapsec].begin(); it != graph[mapsec].end(); ++it)
//         {
//             int mapfrst = (*it).first;
//             int weight = (*it).second;
//             if (mapp[mapfrst] > mapp[mapsec] + weight)
//             {
//                 if (mapp[mapfrst] != INT_MAX)
//                     pq.erase(pq.find({mapp[mapfrst], mapfrst}));
//                 mapp[mapfrst] = mapp[mapsec] + weight;
//                 pq.insert({mapp[mapfrst], mapfrst});
//             }
//         }
//     }
//     if (mapp[destin] == INT_MAX)
//         cout << "-1" << endl;
//     else
//         cout << mapp[destin] << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> graph[1000001];

// void dfs(int source, int destin, unordered_map<int, int> &visited)
// {
//     visited[source] = 1;
//     for (int i = 0; i < graph[source].size(); ++i)
//     {
//         if (!visited[graph[source][i]])
//         {
//             dfs(graph[source][i], destin, visited);
//         }
//     }
// }

// int main()
// {
//     int num;
//     cin >> num;
//     unordered_map<int, int> visited;
//     for (int i = 0; i < num; ++i)
//     {
//         int x;
//         cin >> x;
//         visited[x] = 0;
//     }
//     int ele;
//     cin >> ele;

//     for (int i = 0; i < ele; ++i)
//     {
//         int u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//     }

//     int source, destin;
//     cin >> source >> destin;
//     dfs(source, destin, visited);
//     cout << visited[destin] << endl;
//     return 0;
// }
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <queue>
// #include <set>
#include <bits/stdc++.h>

using namespace std;

vector<int> minSetToRemove(int N, int E, unordered_map<int, vector<int>> &graph, int A, int B)
{
    vector<int> result;
    queue<int> q;
    unordered_map<int, int> dist;
    unordered_map<int, int> parents;
    set<int> visited;

    dist[A] = 0;
    q.push(A);
    visited.insert(A);

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        if (curr == B)
        {
            // backtrack to find the parents
            while (curr != A)
            {
                result.push_back(curr);
                curr = parents[curr];
            }
            result.push_back(A);
            // reverse(result.begin(), result.end());
            return result;
        }

        for (auto next : graph[curr])
        {
            if (next != A && visited.count(next) == 0)
            {
                q.push(next);
                visited.insert(next);
                dist[next] = dist[curr] + 1;
                parents[next] = curr;
            }
        }
    }

    return result;
}

int main()
{
    int N, E, A, B;
    cin >> N;

    unordered_map<int, vector<int>> graph;

    for (int i = 0; i < N; i++)
    {
        int id;
        cin >> id;
        graph[id] = vector<int>();
    }

    cin >> E;

    for (int i = 0; i < E; i++)
    {
        int follower, following;
        cin >> follower >> following;
        graph[follower].push_back(following);
    }

    cin >> A >> B;

    vector<int> result = minSetToRemove(N, E, graph, A, B);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
