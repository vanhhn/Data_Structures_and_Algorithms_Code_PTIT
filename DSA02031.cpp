#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

int check(ll a[],ll n){
	for(int i=2;i<=n-1;++i){
		if(a[i]==1||a[i]==5){
			if(a[i-1]!=1&&a[i+1]!=1&&a[i-1]!=5&&a[i+1]!=5) return 0;
		}
	}
	return 1;
}

int main(){
	char c; cin>>c;
	ll n=c-'A'+1;
	ll a[n+1];
	for(int i=1;i<=n;++i){
		a[i]=i;
	}
	if(check(a,n)){
		char x='A';
		for(int i=1;i<=n;++i){
			char d=x+a[i]-1;
			cout<<d;
		}
		cout<<el;
	}
	ll dem=0;
	while(next_permutation(a+1,a+n+1)){
//		dem++;
		if(check(a,n)){
			char x='A';
			for(int i=1;i<=n;++i){
				char d=x+a[i]-1;
			    cout<<d;
			}
			cout<<el;
		}
	}
	
	
}