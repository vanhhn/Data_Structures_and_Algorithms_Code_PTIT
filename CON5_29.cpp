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
    int dp[n+1]={};
    dp[0]=1;
    for(int i=1;i<=n;i++){
      if(s[i]!='0'){
        dp[i]+=dp[i-1];
      }
      if(i<2) continue;
      if(s[i-1]=='1'||s[i-1]=='2'&&s[i]<='6'){
        dp[i]+=dp[i-2];
      }
    }
    cout<<dp[n]<<"\n";
  }
  return 0;
}