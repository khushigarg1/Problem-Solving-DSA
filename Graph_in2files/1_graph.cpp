#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction)
    {
        // direction= 0 => undirected graph
        // direction= 1 => directed graph
        // create an edge from u to v

        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printAdjlist()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

//-----------------------BFS TRAVERSAL------------------------
void prepareAdjlist(unordered_map<int, set<int>> &adjlist, vector<pair<int, int>> &edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adjlist[u].insert(v);
        adjlist[v].insert(u);
        // adjlist[u].push_back(v);
        // adjlist[v].push_back(u);
    }
}
// to make bfs firstly we have to make adjacenecy list with edges then we will take one queue and one viisted array , firstly push source node in queue then all neighbors of that node and amrk visited q node thne taka efront node from queue and soon
void makebfs(unordered_map<int, set<int>> &adjlist, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty())
    {
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);
        for (auto i : adjlist[frontnode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
// vertex= no.of nodes, edegs = pair of all given edges
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int>> adjlist; // adjacency list
    vector<int> ans;                      // return bfs answer
    unordered_map<int, bool> visited;     // intiitally all value will be false

    prepareAdjlist(adjlist, edges);

    // check and traverse all components of a graph
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            makebfs(adjlist, visited, ans, i);
        }
    }
}

//-----------------------------DFS TRAVERSAL---------------------
// for dfs traversal we can use stack too btu ere we are using recursive approach to dinf dfs, in that we firstly take src node then one nieghbor node then its neighbor then oon if there is no neighbor of next node then go to another neighbor of prev node
void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &compo)
{
    compo.push_back(node);   // storing answer
    visited[node] = true;    // makring visited
    for (auto i : adj[node]) // recursive call fro every connected node
    {
        if (!visited[i])
        {
            dfs(i, visited, adj, compo);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adjlist;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            vector<int> component;
            dfs(i, visited, adjlist, component);
            ans.push_back(component);
        }
    }
}

//---------------------------------CYCLE DETECTION IN AN UNDIRECTED GRAPH------------------------
// to find cyclein bfs use queue and parent parent will be the mappign of one node with parent of that node thus we set parent of every node and queue, take front node from queue then check for all neighbor nodes if visited true but parent of that front node is not equal to this adjacent node then it is not possible it is making loop, ki it is already visited an parent node is different for adj node
bool iscyclebfs(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
{
    unordered_map<int, int> parent;
    parent[src] = -1;
    visited[src] = 1;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (auto i : adj[front])
        {
            if (visited[i] == true && i != parent[front])
            {
                return true;
            }
            else if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
                parent[i] = front;
            }
        }
    }
    return false;
}

bool iscycledfs(int src, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
{
    visited[src] = true;
    for (auto neightbour : adj[src])
    {
        if (!visited[neightbour])
        {
            bool cycleDetected = iscycledfs(neightbour, src, visited, adj);
            if (cycleDetected)
            {
                return true;
            }
        }
        else if (neightbour != parent)
        {
            return true;
        }
    }
    return false;
}

// n-> no. of vertexes and m no. of edges
bool cycledetection(vector<vector<int>> &edges, int n, int m)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            // bool ans = iscyclebfs(i, visited, adj);
            bool ans = iscycledfs(i, -1, visited, adj);
            if (ans == 1)
            {
                return true;
            }
        }
    }
    return false;
}

// int main()
// {
//     int n;
//     cout << "enter number of nodes " << endl;
//     cin >> n;

//     int m;
//     cout << "enter number of edges " << endl;
//     cin >> m;

//     graph g;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         g.addEdge(u, v, 0);
//     }

//     g.printAdjlist();
//     return 0;
// }