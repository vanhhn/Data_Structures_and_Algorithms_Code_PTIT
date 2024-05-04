#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


void khoitao(ll a[],ll n){
	for(int i=1;i<=n;++i){
		a[i]=6;
	}
}

void sinh(ll a[],ll n,ll &ok){
	ll i=n;
	while(i>=1&&a[i]==8){
		a[i]=6;
		--i;
	}
	if(i==0) ok=0;
	else{
		a[i]=8;
	}
	
}

int check(ll a[],ll n){
	if(a[1]!=8||a[n]!=6) return 0;
	int dem=0;
	for(int i=1;i<n;++i){
		if(dem>3) return 0;
		if(a[i]==8&&a[i+1]==8) return 0;
		if(a[i]==8) dem=0;
		else{
			dem++;
		}
	}
	if(a[n]==6) dem++;
	if(dem>3) return 0;
	return 1;
}

int main(){
	ll n; cin>>n;
	ll a[n+1];
	khoitao(a,n);
	ll ok=1;
	if(check(a,n)){
		for(int i=1;i<=n;++i){
			cout<<a[i];
		}
		cout<<el;
	}
	while(ok){
		sinh(a,n,ok);
		if(check(a,n)){
			for(int i=1;i<=n;++i){
				cout<<a[i];
			}
			cout<<el;
		}
//		sinh(a,n,ok);
	}
}
