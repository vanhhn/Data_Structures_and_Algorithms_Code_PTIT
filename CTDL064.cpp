#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[1001][1001];
void preCal(){
        for(int i=0;i<=1000;i++){
            for(int j=0;j<=i;j++){
                if(j==0||i==j){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
                    dp[i][j]%=mod;
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