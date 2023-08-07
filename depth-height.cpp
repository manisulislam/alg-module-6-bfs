#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int depth[N];
int height[N];
//dfs implementation
void dfs(int u){
    //section 1
    //action taken just after entering a node u
    visited[u]=true;
    
    for(int v: adj[u]){
        //section 2
        // action before entering neighbour/child
        if(visited[v]==true) continue;
        depth[v]=depth[u]+1;
        dfs(v);
        //section 3
        //action after exiting a neighbour/child
        if(height[v]+1> height[u]){
            height[u]=height[v]+1;
        }
        //height[u]=max(height[u], height[v]+1);
       
    }
    //section 4
    //action after exiting node u
}
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v); //for directed graph
        //adj[v].push_back(u); // for undirected graph

    }
    dfs(1);
    //print depth
    for(int i=1; i<=n; i++){
      cout<<"Depth of Node:"<<i<<" "<<"Depth:"<<depth[i]<<endl;
       
    }
    cout<<"*********************"<<endl;
    //print height
    for(int i=1; i<=n; i++){
      cout<<"height of Node:"<<i<<" "<<"Height:"<<height[i]<<endl;
       
    }
    
    
    return 0;
}