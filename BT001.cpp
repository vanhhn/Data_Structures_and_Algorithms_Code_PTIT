#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a)cin>>x;
    int m;
    cin>>m;
    int b[m];
    for(int &x:b)cin>>x;
    int p;
    cin>>p;
    int c[p];
    for(int &x:c)cin>>x;
    int dp[n+1][m+1][p+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++){
      for(int j=0;j<=m;j++){
        for(int k=0;k<=p;k++){
          if(i==0||j==0||k==0){
            dp[i][j][k]=0;
          }
          else if(a[i-1]==b[j-1]&&a[i-1]==c[k-1]){
            dp[i][j][k]=1+dp[i-1][j-1][k-1];
          }
          else{
            dp[i][j][k]=max({dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]});
          }
        }
      }
    }
    cout<<dp[n][m][p]<<"\n";
  }
  return 0;
}