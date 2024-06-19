#include<bits/stdc++.h>
using namespace std;
int n,m,check[105][105];
int res;
void init(){
  res=INT_MIN;
  memset(check,0,sizeof(check));
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    check[x][y]=check[y][x]=1;
  }
}
void Try(int u,int sum){
  res=max(res,sum);
  for(int v=0;v<n;v++){
    if(check[u][v]){
      check[u][v]=check[v][u]=0;
      Try(v,sum+1);
      check[u][v]=check[v][u]=1;
    }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
   for(int i=0;i<n;i++){
    Try(i,0);
   }
   cout<<res<<"\n";
  }
  return 0;
}