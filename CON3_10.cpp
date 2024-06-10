#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
      ans=ans+x+y;
      q.push(x+y);
    }
   cout<<ans<<"\n";
  }
  return 0;
  
}