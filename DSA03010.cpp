#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;




int main(){
	int t; cin>>t;
	while(t--){
		ll ans=0;
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;++i) cin>>a[i];
		priority_queue<ll,vector<ll>,greater<ll>> pq;
		for(int i=0;i<n;++i){
			pq.push(a[i]);
		}
		while(pq.size()>1){
			ll top1=pq.top(); pq.pop();
			ll top2=pq.top(); pq.pop();
			ans+=top1+top2;
			pq.push(top1+top2);
		}
		cout<<ans<<el;
	}
}



