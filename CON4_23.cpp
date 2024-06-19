#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll find(ll n,ll k){
    ll m=pow(2,n-1);
    if(k==m) return n;
    if(k>m){
      return find(n-1,2*m-k);
    }
    return find(n-1,k);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<find(n,k)<<"\n";
    }
    return 0;
}