#include<bits/stdc++.h>
using namespace std;

int main(){
       int t; cin>>t; 
       while(t--){
              int n,k,s; cin>>n>>k>>s;
              int a[n];
              for(int i=0;i<n;i++){
                     cin>>a[i];
              }
              int dp[k+1][s+1]={};
              dp[0][0]=1;
              for(int i=0;i<n;i++){
                     for(int j=s;j>=a[i];j--){
                            for(int l=1;l<=k;l++){
                                   dp[l][j]+= dp[l-1][j-a[i]];
                            }
                     }
              }
              cout<<dp[k][s]<<endl;
       }
}