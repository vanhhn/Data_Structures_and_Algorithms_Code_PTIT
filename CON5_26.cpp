#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,c;
    cin>>c>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int dp[c+1]={};
    dp[0]=1;
    for(int i=0;i<n;i++){
      for(int j=c;j>=a[i];j--){
        if(dp[j-a[i]]){
          dp[j]=1;
        }
      }
    }
    for(int i=c;i>=1;i--){
      if(dp[i]){
        cout<<i<<"\n";
        break;
      }
    }
  }
  return 0;
}