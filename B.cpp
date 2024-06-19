#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define inf -1000000009
int n,k,dp[1005][55];
int main(){
  int t;
  cin>>t;
  while(t--){
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++){
      cin>>a[i];
      a[i]%=k;
    }
    for(int i=1;i<=k-1;i++){
      dp[1][i]=inf;
    }
    dp[1][a[1]]=1;
    for(int i=2;i<=n;i++){
      for(int j=0;j<=k-1;j++){
        dp[i][j]=max(dp[i-1][j],dp[i-1][(j-a[i]+k)%k]+1);
      }
    }
    cout<<dp[n][0]<<"\n";
  }
  return 0;
}