#include <bits/stdc++.h>
using namespace std;

int main(){
    int V, E, src;
    cin >> V >> E;
    vector<vector<pair<int,int>>> adj(V);
    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    cin >> src;

    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src});

    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if(d > dist[u]) continue;
        for(auto edge : adj[u]){
            int v = edge.first, w = edge.second;
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for(int i = 0; i < V; i++) cout << dist[i] << " ";
    return 0;
}

