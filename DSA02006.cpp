#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

bool cmp(vector<ll> a,vector<ll> b){
	int i=0,j=0;
	while(i<a.size()&&j<b.size()){
		if(a[i]==b[j]){
			++i; ++j;
		}
		else if(a[i]<b[j]) return a<b;
		else return false;
	}
	if(i<a.size()) return false;
	if(j<b.size()) return a<b;
	
}

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
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		ll a[n+1];
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		ll b[n+1];
		khoitao(b,n);
		ll ok=1;
		vector<vector<ll>> ans;
		while(ok){
			ll sum=0;
			for(int i=1;i<=n;++i){
				if(b[i]==1) sum+=a[i];
			}
			if(sum==k){
				vector<ll> v;
				for(int i=1;i<=n;++i){
					if(b[i]==1) v.pb(a[i]);
				}
				ans.pb(v);
			}
			sinh(b,n,ok);
		}
		if(ans.size()==0){
			cout<<-1<<el;
		}
		else{
			sort(ans.begin(),ans.end(),cmp);
			for(int i=0;i<ans.size();++i){
				cout<<"[";
				for(int j=0;j<ans[i].size()-1;++j){
					cout<<ans[i][j]<<" ";
				}
				cout<<ans[i][ans[i].size()-1]<<"] ";
			}
			cout<<el;
		}
	}
}


