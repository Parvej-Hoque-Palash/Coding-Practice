#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int>adj[N];

void dfs(int node)
{
    vis[node] = true;
    cout<<node<<" ";
    for(int newNode:adj[node])
    {
        if(!vis[newNode])
        {
            dfs(newNode);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0; i<n; i++)
    {
        vis[i] = false;
    }
    for(int i = 0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(3); //passing starting node
}