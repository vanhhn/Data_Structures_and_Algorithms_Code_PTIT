#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int n,m,u,check[1001];
vector<int>adj[1001];
void init(){
  cin>>n>>m>>u;
  for(int i=0;i<1001;i++)adj[i].clear();
  memset(check,0,sizeof(check));
  for(int i=1;i<=m;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
  }
}
void bfs(int u){
   queue<int>q;
   q.push(u);
   check[u]=true;
   while(!q.empty()){
    int x=q.front();
    q.pop();
    cout<<x<<" ";
    for(int v:adj[x]){
      if(!check[v]){
        check[v]=true;
        q.push(v);
      }
    }
   }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        bfs(u);
        cout<<'\n';
    }
    return 0;
}