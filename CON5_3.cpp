#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        int dp[s+1]={0};
        dp[0]=1;
        for(int i=0;i<n;i++){
          for(int j=s;j>=a[i];j--){
            if(dp[j-a[i]]){
              dp[j]=1;
            }
          }
        }
        if(dp[s]){
          cout<<"YES\n";
        }else{
          cout<<"NO\n";
        }
    }
    return 0;
}