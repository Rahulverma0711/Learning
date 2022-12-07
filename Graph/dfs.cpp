#include <bits/stdc++.h>
using namespace std;
void  dfsOfGraph(int node,int comp,vector<int>&vis,vector<int>&ans, vector<int> adj[]) {
    vis[node]=comp;
    ans.push_back(node);
    for(auto x:adj[node]){
        if(!vis[x]){
          dfsOfGraph(x,comp,vis,ans,adj);
        }
    }


}



int main() {
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    adj[v].push_back(u);
    }
    vector<int>ans;
    vector<int>vis(n,0);
    int comp=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            comp++;
            dfsOfGraph(i,comp,vis,ans,adj);
        }
    }
    for(auto &x:ans){
        cout<<x<<" ";
    }
    return 0;
}
