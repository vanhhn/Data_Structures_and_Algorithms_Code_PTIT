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

void sinh(ll a[],ll n,ll &ok){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		--i;
	}
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}

int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		set<char> se;
		for(int i=0;i<s.size();++i){
			se.insert(s[i]);
		}
		ll n=se.size();
		ll a[n+1];
		khoitao(a,n);
		ll ok=1;
		while(ok){
			for(int i=1;i<=n;++i){
				ll tmp=a[i]-1;
				auto it=se.begin();
				while(tmp--){
					++it;
				}
				cout<<*it;
			}
			cout<<" ";
			sinh(a,n,ok);
		}
		cout<<el;
	}
}
