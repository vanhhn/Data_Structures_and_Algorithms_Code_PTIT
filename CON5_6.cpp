#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        string tmp=s;
        reverse(tmp.begin(),tmp.end());
        int n=s.size();
        int ans=0;
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++){
          for(int j=0;j<=n;j++){
            if(i==0||j==0){
              dp[i][j]=0;
            }
            else if(s[i-1]==tmp[j-1]){
              dp[i][j]=1+dp[i-1][j-1];
              ans=max(ans,dp[i][j]);
            }
            else{
              dp[i][j]=0;
            }
          }
        }
        cout<<ans<<"\n";
    }
    return 0;
}