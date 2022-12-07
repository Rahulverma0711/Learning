#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<int>adj[],int V){
    int vis[V+1]={0};
    vector<int> ans;
    queue<int>q;
    q.push(1);
    vis[1]=1;
    while(!q.empty()){
        int n=q.front();
        ans.push_back(n);
        q.pop();
        for(auto it:adj[n]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   vector<int> ans= bfs(adj,n);
   for(auto &x:ans) cout<<x<<" ";
}