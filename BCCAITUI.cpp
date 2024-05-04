#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,W;
  cin>>n>>W;
  int w[n+1],v[n+1];
  for(int i=1;i<=n;i++){
    int x,y;
    cin>>x>>y;
    w[i]=x;
    v[i]=y;
  }
  int dp[n+1][W+1];
  memset(dp,0,sizeof(dp));
  for(int i=1;i<=n;i++){
    for(int j=1;j<=W;j++){
      dp[i][j]=dp[i-1][j];
      if(j>=w[i]){
        dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
      }
    }
  }
  cout<<dp[n][W];
  system("pause");
}