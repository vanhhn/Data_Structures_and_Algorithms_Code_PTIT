#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
ll power(ll a,ll n){
	if(n==0) return 1;
	ll res=power(a,n/2);
	if(n%2==0) return ((res%mod)*(res%mod))%mod;
	else{
		return (((res%mod)*(res%mod))%mod*a%mod)%mod;
	}
}
ll daonguoc(ll n){
	ll ans=0;
	while(n){
		ans=ans*10+n%10;
		n/=10;
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a;
		cin>>a;
		ll n=daonguoc(a);
		cout<<power(a,n)<<"\n";
	}
}