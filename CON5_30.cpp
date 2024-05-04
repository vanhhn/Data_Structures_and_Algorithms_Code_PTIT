#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define MAX 10000
vector<int>v;
void sinh(){
  int i=1;
  while(i*i<=MAX){
    v.push_back(i*i);
    i++;
  }
}
int main()
{
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      int dp[n+1];
      for(int i=0;i<=n;i++){
        dp[i]=i;
      }
      for(int x:v){
        for(int j=x;j<=n;j++){
          dp[j]=min(dp[j],dp[j-x]+1);
        }
      }
        
      cout<<dp[n]<<"\n";
    }
    return 0;
}