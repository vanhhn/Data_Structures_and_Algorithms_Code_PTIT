#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


void khoitao(ll b[],ll k){
	for(int i=1;i<=k;++i){
		b[i]=i;
	}
}

void sinh(ll b[],ll n,ll k){
	ll i=k;
	while(i>=1&&b[i]==n-k+i){
		--i;
	}
	b[i]++;
	for(int j=i+1;j<=k;++j){
		b[j]=b[i]+j-i;
	}
}

int check(ll a[],ll b[],ll k){
	for(int i=1;i<=k;++i){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		ll a[k+1];
		for(int i=1;i<=k;++i){
			cin>>a[i];
		}
		ll b[k+1];
		khoitao(b,k);
		ll dem=1;
		while(!check(a,b,k)){
			dem++;
			sinh(b,n,k);
		}
		cout<<dem<<el;
	}
}
