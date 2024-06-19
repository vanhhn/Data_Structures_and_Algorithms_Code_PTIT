#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll d[100005];
void preCal(){
  priority_queue<ll,vector<ll>,greater<ll>>q;
  map<ll,bool>check;
  q.push(1);
  while(check.size()<10000){
    ll x=q.top();
    q.pop();
    if(check[x*2]==0){
      q.push(x*2);
      check[x*2]=1;
    }
    if(check[x*3]==0){
      q.push(x*3);
      check[x*3]=1;
    }
    if(check[x*5]==0){
      q.push(x*5);
      check[x*5]=1;
    }
  }
  int id=1;
  for(auto it:check){
    d[id++]=it.first;
  }
}

int main(){
  preCal();
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<d[n-1]<<"\n";
  }
  return 0;
}