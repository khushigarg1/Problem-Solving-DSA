#include <bits/stdc++.h>
using namespace std;

// Structure to store the graph
vector<vector<int>> tree;
vector<int> value, cost, visited, chosen;
map<int, pair<int, int>> value_map;

// DFS to ensure connectivity
void dfs(int node, set<int> &included_values)
{
  visited[node] = 1;
  int val = value[node];

  // Include the current vertex if its value is not yet included
  if (!included_values.count(val))
  {
    included_values.insert(val);
    chosen.push_back(node);
  }

  // Continue DFS
  for (int neighbor : tree[node])
  {
    if (!visited[neighbor])
    {
      dfs(neighbor, included_values);
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Input number of unique values
  int n;
  cin >> n;

  int total_vertices = 2 * n;
  value.resize(total_vertices + 1);
  cost.resize(total_vertices + 1);
  visited.resize(total_vertices + 1, 0);
  tree.resize(total_vertices + 1);

  // Input values on the vertices
  for (int i = 1; i <= total_vertices; i++)
  {
    cin >> value[i];
    cost[i] = 2 * i;

    // Map values to their two occurrences
    if (value_map.find(value[i]) == value_map.end())
    {
      value_map[value[i]] = {i, -1};
    }
    else
    {
      value_map[value[i]].second = i;
    }
  }

  // Input the edges of the tree
  for (int i = 0; i < total_vertices - 1; i++)
  {
    int u, v;
    cin >> u >> v;
    tree[u].push_back(v);
    tree[v].push_back(u);
  }

  // Initialize DFS
  set<int> included_values;
  dfs(1, included_values); // Start DFS from vertex 1

  // Output the results
  cout << chosen.size() << '\n';
  for (int vertex : chosen)
  {
    cout << vertex << ' ';
  }
  cout << '\n';

  return 0;
}
