#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i,a,b) for(ll i=a;i<=b;++i)
#define el endl


void readfile(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void fast(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

int main(){
	readfile();
	fast();
	int n; cin>>n;
	ll a[n];
	vector<ll> v1,v2;
	int dem=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]<0) v1.pb(a[i]);
		else if(a[i]>0) v2.pb(a[i]);
		else dem++;
	}
	int l1=v1.size(),l2=v2.size();
	if(l1!=0) sort(v1.begin(),v1.end());
	if(l2!=0) sort(v2.begin(),v2.end());
	ll ans=1;
	if(l2>=3){
		ans=max(ans,v2[l2-1]*v2[l2-2]*v2[l2-3]);
		if(l1>=2){
			ans=max(ans,v2[l2-1]*v1[0]*v1[1]);
		}
	}
	if(l2==2){
		ans=max(ans,v2[l2-1]*v2[l2-2]);
		if(l1>=2){
			ans=max(ans,v2[l2-1]*v1[0]*v1[1]);
		}
	}
	if(l2==1){
		if(l1>=2) ans=max(ans,v2[l2-1]*v1[0]*v1[1]);
		else ans=0;
	}
	if(l1>=2){
		ans=max(ans,v1[0]*v1[1]);
	}
	if(l2==0){
		if(dem!=0){
			if(l1==1) ans=0;
		}
	}
	if(l1==0&&l2==0) ans=0;
	cout<<ans<<el;



}
