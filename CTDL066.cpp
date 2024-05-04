#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
      for(int i=1;i<=n;i++){
      for(int j=1;j<=min(i,k);j++){
          dp[i]+=dp[i-j];
          dp[i]%=mod;
        }
      
    }
    cout<<dp[n]<<"\n";
  }
  return 0;
}