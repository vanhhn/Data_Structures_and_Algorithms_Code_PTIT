#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    ll ans=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
      ans=(ans%mod+a[i]*i%mod)%mod;
    }
    cout<<ans<<"\n";
  }
  system("pause");
}