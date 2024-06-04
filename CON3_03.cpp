#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a)cin>>x;
    sort(a,a+n);
    ll ans=0;
    for(int i=0;i<n;i++){
      ans+=1ll*i*a[i];
      ans%=mod;
    }
     cout<<ans<<"\n";
  }
}