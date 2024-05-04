#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


bool cmp(pair<ll,ll> a,pair<ll,ll> b){
	if(a.first==b.first) return a.second<b.second;
	return a.first<b.first;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		pair<ll,ll> a[n];
		for(int i=0;i<n;++i) cin>>a[i].first;
		for(int i=0;i<n;++i) cin>>a[i].second;
		vector<ll> v(n,1);
		sort(a,a+n,cmp);
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(a[i].first>=a[j].second){
					v[i]=max(v[i],v[j]+1);
				}
			}
		}
		ll M=-1e9-7;
		for(int i=0;i<n;++i){
			M=max(M,v[i]);
		}
		cout<<M<<el;
	}
}

