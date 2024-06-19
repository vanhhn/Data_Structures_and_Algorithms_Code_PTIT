#include<bits/stdc++.h>
using namespace std;
int n,m,check[1001],ans;
vector<int>adj[1001];
int deg1[1001],deg2[1001];
void init(){
  ans=1;
  cin>>n>>m;
  for(int i=0;i<1001;i++){
    deg1[i]=deg2[i]=check[i]=0;
    adj[i].clear();
  }
  for(int i=1;i<=m;i++){
    int x,y;
    cin>>x>>y;
    deg1[x]++;
    deg2[y]++;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
     init();
     for(int i=1;i<=n;i++){
      if(deg1[i]!=deg2[i]){
        ans=0;
        break;
      }
     }   
     cout<<ans<<"\n";
  }
  return 0;
}