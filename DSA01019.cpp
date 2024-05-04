#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

void khoitao(ll a[],ll n){
	for(int i=1;i<=n;++i){
		a[i]=0;
	}
}

void sinh(ll a[],ll n,ll &ok){
	if(ok==0){
		return ;
	}
	else{
		ll i=n;
		while(i>=1&&a[i]==1){
			a[i]=0;
			--i;
		}
		if(i==0) ok=0;
		else{
			a[i]=1;
		}
	}
}

int check(ll a[],ll n){
	if(a[1]!=1||a[n]!=0) return 0;
	for(int i=1;i<n;++i){
		if(a[i]==1&&a[i+1]==1) return 0;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		ll ok=1;
		khoitao(a,n);
		while(ok){
			if(check(a,n)){
				for(int i=1;i<=n;++i){
					if(a[i]==0) cout<<"A";
					else cout<<"H";
				}
				cout<<el;
			}
			sinh(a,n,ok);
		}
//		cout<<el;
	}
}
