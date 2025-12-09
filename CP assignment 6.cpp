#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& adj, vector<bool>& vis){
    vis[u] = true;
    for(int v : adj[u]){
        if(!vis[v]) dfs(v, adj, vis);
    }
}

int main(){
    int V, E;
    cin >> V >> E;
    vector<vector<int>> adj(V);
    for(int i = 0; i < E; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> vis(V, false);
    int count = 0;
    for(int i = 0; i < V; i++){
        if(!vis[i]){
            dfs(i, adj, vis);
            count++;
        }
    }

    cout << count;
    return 0;
}

