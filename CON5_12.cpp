#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll dp[1005][1005];
void preCal(){
  // dp[0][0]=1;
  // for(int i=1;i<=1000;i++){
  //      dp[i][1]=i;
  // }
  for(int i=0;i<=1000;i++){
    for(int j=0;j<=i;j++){
        if(j==0){
          dp[i][j]=1;
        }
        else if(i>0&&j==1){
          dp[i][j]=i;
        }
        else{
          dp[i][j]=i%mod*dp[i-1][j-1]%mod;
          dp[i][j]%=mod;
        }
    }
  }
}
int main()
{   
    preCal();
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<dp[n][k]<<"\n";
    }
    return 0;
}