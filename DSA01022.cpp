#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

void khoitao(ll b[],ll n){
	for(int i=1;i<=n;++i){
		b[i]=i;
	}
}

void sinh(ll b[],ll n){
	ll i=n-1;
	while(i>=1&&b[i]>b[i+1]){
		--i;
	}
	ll j=n;
	while(b[i]>b[j]){
		--j;
	}
	swap(b[i],b[j]);
	reverse(b+i+1,b+n+1);
}

int check(ll a[],ll b[],ll n){
	for(int i=1;i<=n;++i){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		ll b[n+1];
		khoitao(b,n);
		ll dem=1;
		while(!check(a,b,n)){
			dem++;
			sinh(b,n);
		}
		cout<<dem<<el;
	}
}
