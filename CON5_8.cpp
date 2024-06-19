#include<bits/stdc++.h>
using namespace std;
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
    int dp[n+1][m+1]={};
    int ans=0;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        if(!a[i][j]){
          continue;
        }
        else{
          dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
        }
        ans=max(ans,dp[i][j]);
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}