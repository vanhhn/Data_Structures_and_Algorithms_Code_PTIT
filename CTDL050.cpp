#include<bits/stdc++.h>
using namespace std;
#define mod 123456789
#define ll long long
ll powerMod(ll a,ll n){
   if(n==0) return 1;
   ll res=powerMod(a,n/2);
   if(n%2==0){
    return ((res%mod)*(res%mod))%mod;
   }
   else{
    return (((res%mod)*(res%mod))%mod*a%mod)%mod;
   }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    cout<<powerMod(2,n-1)<<"\n";
  }
  system("pause");
  
}