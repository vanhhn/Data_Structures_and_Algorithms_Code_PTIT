#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
int sum;
void init(){
  cin>>n;
  sum=0;
  for(int i=0;i<n;i++){
     cin>>a[i];
     sum+=a[i];
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
    if(sum%2==1){
      cout<<"NO\n";
    }
    else{
      sum/=2;
      vector<int> dp(sum+1,0);
      dp[0]=1;
      for(int i=0;i<n;i++){
        for(int j=sum;j>=a[i];j--){
          if(dp[j-a[i]]){
            dp[j]=1;
          }
        }
      }
      cout<<(dp[sum]?"YES\n":"NO\n");
    }
  }
  return 0;
}