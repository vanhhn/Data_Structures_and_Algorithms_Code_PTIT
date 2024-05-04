#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int n,m,q,s,t,check[1001];
vector<int>adj[1001];
void init(){
  cin>>n>>m;
  for(int i=0;i<1001;i++)adj[i].clear();
  for(int i=1;i<=m;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  cin>>q;
}
void reInit(){
  memset(check,false,sizeof(check));
}
bool dfs(int s,int t){
  check[s]=true;
  if(check[t]==true){
    return true;
  }
  for(int x:adj[s]){
    if(!check[x]){
      if(dfs(x,t)){
        return true;
      }
    }
  }
  return false;
}
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        init();
        while(q--){
          cin>>s>>t;
          reInit();
          if(dfs(s,t)==true){
            cout<<"YES\n";
          }
          else{
            cout<<"NO\n";
          }
        }
    }
    return 0;
}