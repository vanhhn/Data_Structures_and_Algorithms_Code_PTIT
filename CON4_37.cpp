#include<bits/stdc++.h>
using namespace std;
#define ll long long
int tim(ll a[],int n,ll k){
  int l=0,r=n-1;
  int res=-1;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]<=k){
      res=m;
      l=m+1;
    }
    else{
     r=m-1;
    }
  }
  return res;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    ll k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    int ans=tim(a,n,k);
    if(ans!=-1){
      cout<<ans+1<<"\n";
    }
    else{
      cout<<"-1\n";
    }
  }
  return 0;
}