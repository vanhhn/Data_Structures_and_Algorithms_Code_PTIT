#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
     priority_queue<int,vector<int>,greater<int>>q;
     for(int i=0;i<n;i++){
      int x;
      cin>>x;
      q.push(x);
     }
     ll ans=0;
     while(q.size()>1){
      int x=q.top();
      q.pop();
      int y=q.top();
      q.pop();
      int tmp=x+y;
      ans=ans+tmp;
      q.push(tmp);
     }
     cout<<ans<<"\n";
  }
  system("pause");
}