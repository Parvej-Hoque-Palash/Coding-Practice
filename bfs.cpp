#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int>adj[N];

void bfs(int startNode)
{
    queue<int>q;
    q.push(startNode);
    vis[startNode] = true;

    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop();
        for(int newNode:adj[node]){
            if(!vis[newNode]){
                vis[newNode] = true;
                q.push(newNode);
            }
        }
    }
}

int main() {
    int n,m;
    cin>>n>>m;
    for(int i = 0; i<n; i++)
    {
        vis[i] = false;
    }
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1); //passing starting node
}