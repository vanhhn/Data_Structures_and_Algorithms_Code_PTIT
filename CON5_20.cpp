#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n=s.size();
    s=" "+s;
    vector<int>dp(n+1);
     dp[0]=0;
    for(int i=1;i<=n;i++){
      dp[i]=dp[i-1]*10+(s[i]-'0')*i;
    }
    cout<<accumulate(dp.begin()+1,dp.end(),0)<<"\n";
  }
  return 0;
}