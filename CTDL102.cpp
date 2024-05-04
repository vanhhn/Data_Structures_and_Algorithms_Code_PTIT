#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1005];
int main(){
  int n;
  cin>>n;
  int a[n+1][n+1];
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
      if(a[i][j]){
        adj[i].push_back(j);
      }
    }
    sort(adj[i].begin(),adj[i].end());
  }
  for(int i=1;i<=n;i++){
    cout<<i<<": ";
    for(int x:adj[i]){
      cout<<x<<" ";
    }
    cout<<"\n";
  }
  //system("pause");
}