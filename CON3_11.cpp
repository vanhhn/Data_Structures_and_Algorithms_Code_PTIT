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
    priority_queue<ll,vector<ll>,greater<ll>>q;
    for(int i=0;i<n;i++){
      ll x;
      cin>>x;
      q.push(x);
    }
    ll ans=0;
    while(q.size()>1){
      ll x=q.top();
      q.pop();
      ll y=q.top();
      q.pop();
      ll k=x+y;
      ans+=k;
      ans%=mod;
      q.push(k);
    }
   cout<<ans<<"\n";
  }
  return 0;
  
}