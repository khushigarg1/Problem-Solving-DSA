#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    void addEdge(int x, int y ){
        l[x].push_back(y);
        // l[y].push_back(x);
    }
    // void printAdLIst(){
    //     for (int i = 0; i < V; i++)
    //     {
    //         cout<<"Vertex"<<i<<" --> ";
    //         for(int nbr:l[i]){
    //             cout<<nbr<<", ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // void bfs(int src){
    //     bool visited[V];
    //     for(int i = 0; i < V; i++){
    //         visited[i] = false;
    //     }
    //     queue<int> q;
    //     q.push(src);
    //     visited[src] = true;
    //     while (!q.empty())
    //     {
    //         int temp = q.front();
    //         cout<<temp<<" ";
    //         q.pop();
    //         for(int i:l[temp]){
    //             if(!visited[i]){
    //                 q.push(i);
    //                 visited[i] = true;
    //             }
    //         }
    //     }
        
    // }
    // void dfs_helper(int src, bool visited[]){
    //     cout<<src<<" ";
    //     visited[src] = true;
    //     for(int nbr:l[src]){
    //         if(!visited[nbr]){
    //             dfs_helper(nbr,visited);
    //         }
    //     }
    // }
    // void dfs(int src){
    //     bool visited[V];
    //     for (int i = 0; i < V; i++)
    //     {
    //         visited[i] = false;
    //     }
    //     dfs_helper( src, visited);
        
    // }
    void sort_helper(int src,bool visited[],stack<int> &s){
        // if(visited[src])return;
        visited[src] = true;
        
            for(auto x:l[src]){
                if(!visited[x]){
                    // visited[x] = true;
                    sort_helper(x,visited,s);
                }
            }
            s.push(src);
    }
    void topologicalsort(){
        bool visited[V] = {0};
        stack<int> s;
        for(int src = 0; src < V; src++)
            if(!visited[src])
                sort_helper(src,visited,s);
        while(!s.empty()){
            int x = s.top();
            s.pop();
            cout<<x<<" ";
        }
    }
};
int main(){
    Graph g(6);
    g.addEdge(5,0);
    g.addEdge(5,2);
    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(4,1);
    g.addEdge(4,0);
    g.topologicalsort();
}