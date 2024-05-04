#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    n=8*n+1;
    ll ans=floor(sqrt(n));
    ans=(ans-1)/2;
    cout<<ans<<"\n";
  }
  system("pause");
}