#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

void khoitao(ll b[],ll n){
	for(int i=1;i<=n;++i) b[i]=0;
}

void sinh(ll b[],ll n,ll &ok){
	int i=n;
	while(i>=1&&b[i]==1){
		b[i]=0;
		--i;
	}
	if(i==0) ok=0;
	else b[i]=1;
}


int main(){
	ll n,k; cin>>n>>k;
	ll a[n+1];
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	ll b[n+1];
	khoitao(b,n);
	ll ok=1;
	ll dem=0;
	while(ok){
		ll sum=0;
		for(int i=1;i<=n;++i){
			if(b[i]==1) sum+=a[i];
		}
		if(sum==k){
			dem++;
			for(int i=1;i<=n;++i){
				if(b[i]) cout<<a[i]<<" ";
			}
			cout<<el;
		}
		sinh(b,n,ok);
	}
	cout<<dem;
}



