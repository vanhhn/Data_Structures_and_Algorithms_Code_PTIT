#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[105][50005];
void preCal()
{
  for(int i=1;i<=9;i++){
    dp[1][i]=1;
  }
  for(int i=2;i<=100;i++){
    for(int j=0;j<=50000;j++){
      for(int k=0;k<=9;k++){
        if(j>=k){
          dp[i][j]+=dp[i-1][j-k];
          dp[i][j]%=mod;
        }
      }
    }
  }
}
int main(){
  preCal();
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    cout<<dp[n][k]<<"\n";
  }
  return 0;
}