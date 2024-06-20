#include<bits/stdc++.h>
using namespace std;
typedef struct{
  int x;
  int y;
  int d;
}di;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        cin>>a[i][j];
      }
    }
    int ok=0;
    queue<di>q;
    q.push({1,1,0});
    int check[n+1][m+1]={};
    check[1][1]=1;
    while(q.size()){
      di top=q.front();
      if(top.x==n&&top.y==m){
         cout<<top.d<<"\n";
         ok=1;
         break;
      }
      q.pop();
      if(top.x+a[top.x][top.y]<=n&&!check[top.x+a[top.x][top.y]][top.y]){
        q.push({top.x+a[top.x][top.y],top.y,top.d+1});
        check[top.x+a[top.x][top.y]][top.y]=1;
      }
      if(top.y+a[top.x][top.y]<=m&&!check[top.x][top.y+a[top.x][top.y]]){
        q.push({top.x,top.y+a[top.x][top.y],top.d+1});
        check[top.x][top.y+a[top.x][top.y]]=1;
      }
    }
    if(!ok)cout<<-1<<"\n";
  }
  return 0;
}