#include<bits/stdc++.h>
using namespace std;
int n,m,check[1001],ok;
vector<int>adj[1001];
void init(){
  cin>>n>>m;
  for(int i=0;i<1001;i++){
    adj[i].clear();
  }
  ok=0;
  for(int i=1;i<=m;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

}
void dfs(int u,int p){
  if(ok){
    return ;
  }
  check[u]=1;
  for(int x:adj[u]){
    if(!check[x]){
      dfs(x,u);
    }
    else{
      if(x!=p){
         ok=1;
         return ;
      }
    }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
    for(int i=1;i<=n;i++){
    memset(check,0,sizeof(check));
      if(!check[i]){
        dfs(i,-1);
        if(ok){
          cout<<"YES\n";
          break;
        }
      }
    }
    if(!ok){
      cout<<"NO\n";
    }
  }
  return 0;
}