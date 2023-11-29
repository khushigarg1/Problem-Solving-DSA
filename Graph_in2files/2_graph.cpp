#include <bits/stdc++.h>
#include "1_graph.cpp"
using namespace std;

class Graph
{
public:
    int n;
    // unordered_map<int, list<int>> adj;
};

// detection of cycle in directed graph: for thsi we will use visited and dfsvisited array visited is just like node hase been visited and dfvisited is like our node is in recursive taakc or not like our dfs or not bczo we will apply recursion to find cycle and whenever a node works complete it will be false for dfsvisited:- if viisted or cdfsviisted both will be true for any condiiton then it will form cycle
bool checkcycledfs(int node, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;
    dfsvisited[node] = true;

    for (int i : adj[node])
    {
        if (!visited[i])
        {
            bool cycledetected = checkcycledfs(i, visited, dfsvisited, adj);
            if (cycledetected)
            {
                return true;
            }
        }
        else if (dfsvisited[i])
        {
            return true;
        }
    }
    dfsvisited[node] = false;
    return false;
}
bool cycledetection(vector<pair<int, int>> &edges, int n)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
    }
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bool iscycle = checkcycledfs(i, visited, dfsvisited, adj);
            if (iscycle)
            {
                return true;
            }
        }
    }
    return false;
}

// Topological sorting:- an linear nodes structure where one node should be ahead of another node likr viceversa should not be present , parent node should be at first then child node in ts it works on acyclic dag if we are not abel to amke topological sort then itmeans there iscycle present
void recursivetopological(int node, unordered_map<int, bool> &visited, stack<int> &stack, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;
    for (int i : adj[node])
    {
        if (!visited[i])
        {
            recursivetopological(i, visited, stack, adj);
        }
    }
    stack.push(node);
}
vector<int> topologicalsort(unordered_map<int, list<int>> adj, int n)
{
    // unordered_map<int, list<int>> adj;
    // for (int i = 0; i < edges.size(); i++)
    // {
    //     adj[edges[i].first].push_back(edges[i].second);
    // }
    stack<int> stack;
    unordered_map<int, bool> visited(false);
    for (int i = 1; i < n; i++)
    {
        if (!visited[i])
        {
            recursivetopological(i, visited, stack, adj);
        }
    }

    cout << "Topological sort is:- " << endl;
    vector<int> ts;
    while (!stack.empty())
    {
        ts.push_back(stack.top());
        stack.pop();
    }
    return ts;
}

//----------------Topological sort uisng kahn's algorithm--------------------
// kahns algorithm say firstly find indegree ofall node and ush0 indegree nodes into q then find front node and pop until and after removing that node decre,ment in indegree if 0 then puhs into queue and so on thus we can find topological sort by bfs
void kahntopologicalsort(unordered_map<int, list<int>> adj, int n)
{
    vector<int> indegree(n);
    queue<int> q;
    // find indegree of all verticess
    for (auto i : adj)
    {
        for (auto j : adj[i.first])
        {
            indegree[j]++;
        }
    }
    // add vertices with 0 indegree to queue
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    // vector<int> ans;
    // for cycle detection using bfs just add count in kahns algo
    int count = 0;
    while (!q.empty())
    {
        /* code */
        int frontnode = q.front();
        q.pop();
        // ans.push_back(frontnode);
        count++;
        for (auto i : adj[frontnode])
        {
            indegree[i]--;
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
    }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cycle deetcion part using bfs
    if (count == n)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
//  ------------------------shortest path in an undirected graph---------------------------
// make visited and parent array and one queue in whcih push starting node and visited of it true then traverse adjacent of that node and id not visited then make true and set parent of all neighbors to that node and push not visited node into queue thus we get parent array, now we can find shorted path by gettign parent element of destination node then parent node of next node and so on untill we dont find starting node
void spundirected(unordered_map<int, list<int>> adj, int n, int s, int d)
{
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        /* code */
        int frontnode = q.front();
        q.pop();
        for (auto i : adj[frontnode])
        {
            if (!visited[i])
            {
                visited[i] = true;
                parent[i] = frontnode;
                q.push(i);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << parent[i] << " " << visited[i] << endl;
    }
    vector<int> ans;
    int key = d;
    ans.push_back(key);
    while (key != s)
    {
        key = parent[key];
        ans.push_back(key);
    }
    // reverse(ans.begin(),ans.end());
    // cout << ans.size();
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[ans.size() - i - 1] << " ";
    }
}
int main()
{
    int n;
    cout << "enter number of nodes " << endl;
    cin >> n;

    int m;
    cout << "enter number of edges " << endl;
    cin >> m;

    graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
        // g.addEdge(u, v, 1);
    }

    g.printAdjlist();
    // vector<int> tans = topologicalsort(g.adj, n);
    // for (int i : tans)
    // {
    //     cout << i << " ";
    // }

    // kahntopologicalsort(g.adj, n);

    spundirected(g.adj, n, 1, 8);
    return 0;
}