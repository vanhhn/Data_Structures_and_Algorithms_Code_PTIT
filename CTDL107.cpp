#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1005];
bool visited[1005];
void bfs(int u){
  queue<int>q;
  q.push(u);
  visited[u]=true;
  while(!q.empty()){
    int x=q.front();
    q.pop();
    cout<<x<<" ";
    for(int v:adj[x]){
      if(!visited[v]){
        q.push(v);
        visited[v]=true;
      }
    }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,u;
    cin>>n>>m>>u;
    for(int i=1;i<=m;i++){
      int x,y;
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
    memset(visited,0,sizeof(visited));
    bfs(u);
    for(int i=0;i<1005;i++){
      adj[i].clear();
    }
    cout<<"\n";
  }
  return 0;
}