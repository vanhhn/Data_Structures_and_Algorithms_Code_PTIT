#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

void khoitao(ll a[],ll n){
	for(int i=1;i<=n;++i){
		a[i]=i;
	}
}

int check(ll a[],ll n){
	for(int i=2;i<n;++i){
		if(a[i]-a[i-1]==-1||a[i]-a[i-1]==1) return 0;
		if(a[i]-a[i+1]==-1||a[i]-a[i+1]==1) return 0;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		khoitao(a,n);
		while(next_permutation(a+1,a+n+1)){
			if(check(a,n)){
				for(int i=1;i<=n;++i) cout<<a[i];
				cout<<el;
			}
		}
	}
}