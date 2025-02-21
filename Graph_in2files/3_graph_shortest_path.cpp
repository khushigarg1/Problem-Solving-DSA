#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
  unordered_map<int, list<pair<int, int>>> adj;
  void addEdge(int u, int v, int w)
  { // uand v :- frist and second vertices , w:- weight between vertices
    pair<int, int> p1 = make_pair(v, w);
    adj[u].push_back(p1);
    // dor djikstras
    // pair<int, int> p2 = make_pair(u, w);
    // adj[v].push_back(p2);
  }

  void printadj()
  {
    for (auto i : adj)
    {
      cout << i.first << ":- ";
      for (auto neighbor : adj[i.first])
      {
        cout << "[" << neighbor.first << "," << neighbor.second << "], ";
      }
      cout << endl;
    }
  }

  // find topological sort stack to find shortest distance in directed acyclic graph, firstly we make adjacenecy list with vertices and list of pair , pair includes adjacency vertcies and weight of edge , then we find dfs for our graph after that we apply method to get sghortest path for all vertices, we will check distance of src node + edge weight is less than adjacenecy node hen we take shortest distance for adjacennecy node if not then we dont chnage that node let it remain same
  void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s)
  {
    visited[node] = true;

    for (auto neighbor : adj[node])
    {
      if (!visited[neighbor.first])
      {
        dfs(neighbor.first, visited, s);
      }
    }
    s.push(node);
  }

  void getshortestpath(int src, vector<int> &dist, stack<int> &s)
  {
    dist[src] = 0;

    while (!s.empty())
    {
      int top = s.top();
      s.pop();

      if (dist[top] != INT_MAX) // if distance is nto equal to infiinity
      {
        for (auto i : adj[top]) // traverse for all adjacenecy node of top node of stack
        {
          if (dist[top] + i.second < dist[i.first]) // check distance of node + edge weight is less than then change otherwise same
          {
            dist[i.first] = dist[top] + i.second;
          }
        }
      }
    }
  }

  void dijikstras(int src, set<pair<int, int>> &s, vector<int> &dist)
  {
    s.insert(make_pair(0, src));
    dist[src] = 0;
    while (!s.empty())
    {
      pair<int, int> top = *s.begin();
      s.erase(top);

      int distance = top.first;
      int vertex = top.second;
      // if (dist[vertex] != INT_MAX)
      // {
      for (auto neighbor : adj[vertex])
      {
        if (dist[neighbor.first] > distance + neighbor.second)
        {
          auto record = s.find(make_pair(dist[neighbor.first], neighbor.first)); // find record if with this node any record found in set then erase that set node and insert new updated record
          if (record != s.end())                                                 // if record found
          {
            s.erase(record);
          }
          dist[neighbor.first] = distance + neighbor.second;         // update distance
          s.insert(make_pair(dist[neighbor.first], neighbor.first)); // push record in set
        }
      }
      // }
    }

    for (int i = 0; i < dist.size(); i++)
    {
      cout << dist[i] << " ";
    }
    cout << endl;
  }

  // find minimuym spanning tree using prmis algorithm
  int findmin(vector<bool> mst, vector<int> key)
  {
    int min = INT_MAX;
    int ans;
    for (int i = 0; i < key.size(); i++)
    {
      // cout << key[i] << " " << min << mst[i] << " " << endl;
      if (min > key[i] && mst[i] != true)
      {
        min = key[i];
        ans = i;
      }
    }
    return ans;
  }
  void prims(int n, int src)
  {
    vector<int> key(n, INT_MAX);
    vector<bool> mst(n, false);
    vector<int> parent(n, -1);

    // if src node is 0 then
    key[0] = src;
    mst[0] = true;
    parent[0] = -1;
    for (auto i : adj[src])
    {
      parent[i.first] = src;
      if (key[i.first] > i.second)
      {
        key[i.first] = i.second;
      }
    }
    // int prev = src;
    for (int i = 0; i < n - 1; i++)
    {
      int min_key = findmin(mst, key);
      cout << "minimum key" << min_key;
      // prev = min_key;
      mst[min_key] = true;
      for (auto j : adj[min_key])
      {
        if (mst[j.first] == false && key[j.first] > j.second)
        {
          key[j.first] = j.second;
          parent[j.first] = min_key;
        }
      }
    }

    for (int i = 0; i < n; i++)
    {
      cout << parent[i] << " " << key[i];
      cout << endl;
    }
  }

  //-------------------KRUSKAL'S ALGORITHM-----------------------
  //-------------------union set------------------or disjoint set-----------
  // find parent of the given node if equal then return node if not then return recurisve loop for that parent node bczo there is possibility that there can be one more parent node of that node and liek tree thats why we are doing parent node compression and parent node compression,
  int findParent(vector<int> &parent, int node)
  {
    if (parent[node] == node)
    {
      return node;
    }
    return parent[node] = findParent(parent, parent[node]);
  }
  // find union set here to find union we have to check reank of both node whichw e have to find unions if rank less tahn then make parent node to bigger node and if equal then anythign is possible just have to increase rank of parent node
  void unionSet(int u, int v, vector<int> &parent, vector<int> &rank)
  {
    u = findParent(parent, u);
    v = findParent(parent, v);

    if (rank[u] < rank[v])
    {
      parent[u] = v;
    }
    else if (rank[v] < rank[u])
    {
      parent[v] = u;
    }
    else
    {
      parent[v] = u;
      rank[u]++;
    }
  }
  bool compareWeight(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b)
  {
    return a.second.second < b.second.second;
  }
  // for kruskal sort adj acoording to weight and take smallest weight edges then check parent for both ndoe if aprent of both node is diff then merge if same then ignore
  int minSpanning(int n)
  {
    vector<int> parent(n);
    vector<int> rank(n);
    for (int i = 0; i < n; i++)
    {
      parent[i] = i;
      rank[i] = 0;
    }

    vector<pair<int, pair<int, int>>> mapVector;
    for (const auto &kvp : adj)
    {
      for (const auto &pair : kvp.second)
      {
        mapVector.push_back(make_pair(kvp.first, pair));
      }
    }

    sort(mapVector.begin(), mapVector.end(), [](const auto &lhs, const auto &rhs)
         { return lhs.second.second < rhs.second.second; });

    int minweight = 0;
    for (auto i : mapVector)
    {
      int u = findParent(parent, i.first);
      int v = findParent(parent, i.second.first);
      int w = i.second.second;
      // cout << u << " " << v << endl;
      if (u != v)
      {
        minweight += w;
        unionSet(u, v, parent, rank);
        // cout << "unionset end";
      }
    }
    cout << "loop";

    for (int i = 0; i < parent.size(); i++)
    {
      cout << parent[i] << " " << rank[i] << endl;
    }
    return minweight;
  }

  //------------------------------bridge in graph---------------------
  // when we remove any edge our graph will get didvided more tahn 1 components
  void dfsbridge(int node, int &parent, int &timer, unordered_map<int, list<pair<int, int>>> &adj, unordered_map<int, bool> &visited, vector<int> &disc, vector<int> &low, vector<vector<int>> &res)
  {
    visited[node] = true;
    disc[node] = low[node] = timer++;

    for (auto nbr : adj[node])
    {
      int neighbour = nbr.first;
      if (neighbour == parent)
      {
        continue;
      }
      else if (!visited[neighbour])
      {
        dfsbridge(neighbour, node, timer, adj, visited, disc, low, res);
        low[node] = min(low[node], low[neighbour]);
        /*
        // if (low[neighbour] >= disc[node] && parent !=-1)  //for articulation point
        // {
            // ap[node] = true;
        // }
        // child++;
        */

        // check if edge is bridge or not
        if (low[neighbour] > disc[node]) // for bridge
        {
          vector<int> ans;
          ans.push_back(node);
          ans.push_back(neighbour);
          res.push_back(ans);
        }
      }
      else // back edge present: -already visited and not a parent
      {
        low[node] = min(disc[neighbour], low[node]);
      }
    }
    /*
    for articulations point
    if(parent == -1 && child>=1){
        ap[node] = 1;
    }
    */
  }
  void bridgegraph(int n)
  {
    vector<int> discovery(n);
    vector<int> low(n);
    int parent = -1;
    unordered_map<int, bool> visited;
    int timer = 0;

    for (int i = 0; i < n; i++)
    {
      discovery[i] = -1;
      low[i] = -1;
      visited[i] = false;
    }
    // adj :- first edge (second edge , weight)
    vector<vector<int>> res;
    for (int i = 0; i < n; i++)
    {
      if (!visited[i])
      {
        dfsbridge(i, parent, timer, adj, visited, discovery, low, res);
      }
    }
    for (int i = 0; i < res.size(); i++)
    {
      cout << res[i][0] << " " << res[i][1] << endl;
    }
  }

  //-----------------------------------ARTICULATION POINT---------------
  // AFTER REMOVING ANY NODE GRPAQH WILL GET DIVIDED INTO MORE THAN 1 COMPONENTS

  //----------------------------------KasaRaju's algorithm----------------------
  // to find strong connected components like from one node we can reach to every other node or not of graph
  // approach :- first topolgical sort sort all nodes then apply graph transpose like edges reverse and then apply dfs
  void dfskosaraju(int node, unordered_map<int, bool> &vis, stack<int> &s, unordered_map<int, list<pair<int, int>>> &adj)
  {
    vis[node] = true;
    for (auto nbr : adj[node])
    {
      if (!vis[nbr.first])
      {
        dfskosaraju(nbr.first, vis, s, adj);
      }
    }
    s.push(node);
  }
  void dfscall(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj)
  {
    vis[node] = true;
    for (auto nbr : adj[node])
    {
      if (!vis[nbr])
      {
        dfscall(nbr, vis, adj);
      }
    }
  }
  void strognconnected(int v)
  {
    // topological sort
    stack<int> s;
    unordered_map<int, bool> visited;
    for (int i = 0; i < v; i++)
    {
      if (!visited[i])
      {
        dfskosaraju(i, visited, s, adj);
      }
    }

    // create a transpose graph
    unordered_map<int, list<int>> transpose;
    for (int i = 0; i < v; i++)
    {
      visited[i] = false;
      for (auto nbr : adj[i])
      {
        transpose[nbr.first].push_back(i);
      }
    }

    // dfs call using above ordering
    int count = 0;
    while (!s.empty())
    {
      int top = s.top();
      s.pop();
      if (!visited[top])
      {
        count++;
        dfscall(top, visited, transpose);
      }
    }

    cout << count << endl;
  }

  //------------------------------BELLMON FORD--------------------
  // used to find shortest path, bczo djikstar dont work on negative edges and in bellman ford negative cycle shouldnot be present oterwise it will go in loop with flow...
  void bellmanford(int n, int m, int src)
  {
    vector<int> dist(n + 1, INT_MAX);
    dist[src] = 0;

    for (int i = 1; i <= n; i++)
    {
      for (const auto &[u, pairs] : adj)
      {
        const auto &[v, w] = pairs.front();

        if (dist[u] != INT_MAX && (dist[u] + w < dist[v]))
        {
          dist[v] = dist[u] + w;
        }
      }
    }

    int flag = 0;
    for (const auto &[u, pairs] : adj)
    {
      const auto &[v, w] = pairs.front();

      if (dist[u] != INT_MAX && (dist[u] + w < dist[v]))
      {
        flag = 1;
      }
    }

    if (flag == 0)
    {
      // return dist[dest]
      for (int i = 0; i < dist.size(); i++)
      {
        cout << dist[i] << " ";
      }
    }
    else
    {
      cout << "Negative cycle present.";
    }
  }
};

int main()
{
  Graph g;
  int n;
  cout << "enter number of vertices ";
  cin >> n;
  int e;
  cout << "enter number of edges ";
  cin >> e;

  for (int i = 0; i < e; i++)
  {
    int u, v, w;
    cin >> u >> v >> w;
    g.addEdge(u, v, w);
  }
  g.printadj();

  // unordered_map<int, bool> visited;
  // stack<int> s;
  // for (int i = 0; i < n; i++)
  // {
  //     if (!visited[i])
  //     {
  //         g.dfs(i, visited, s);
  //     }
  // }

  // int src = 1;
  // vector<int> dist(n);
  // for (int i = 0; i < n; i++)
  // {
  //     dist[i] = INT_MAX;
  // }
  // g.getshortestpath(src, dist, s);
  // for (int i = 0; i < dist.size(); i++)
  // {
  //     cout << dist[i] << " ";
  // }

  //---------------DJKISTRA'S ALGORIHTM---------------
  // set<pair<int, int>> setd;
  // // vector<int> dist(n);
  // g.dijikstras(0, setd, dist);

  // g.prims(n, 0);

  // int weight = g.minSpanning(e);
  // cout << "minimum weight " << weight;

  // g.bridgegraph(n);

  // g.strognconnected(n);

  g.bellmanford(n, e, 1);

  return 0;
}

/* 6 9
1 2 2
1 4 1
1 5 4
4 5 9
4 3 5
2 4 3
2 3 3
2 6 7
3 6 8
*/