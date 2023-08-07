#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
//dfs implementation
void dfs(int u){
    //section 1
    //action taken just after entering a node u
    visited[u]=true;
    cout<<"Visited Node:"<<u<<endl;
    for(int v: adj[u]){
        //section 2
        // action before entering neighbour/child
        if(visited[v]==true) continue;
        dfs(v);
        //section 3
        //action after exiting a neighbour/child
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
    //print visiting 
    for(int i=1; i<=n; i++){
       cout<<"node visited: "<<i<<"status"<<visited[i]<<endl;
       
    }
    
    
    return 0;
}