#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl
int mod=1e9+7;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}



int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n,m,k; cin>>n>>m>>k;
		ll a[n],b[m],c[k];
		int check=1;
		map<ll,ll> mp1,mp2,mp3;
		for(int i=0;i<n;++i){
			cin>>a[i];
			mp1[a[i]]++;
		}
		for(int i=0;i<m;++i){
			cin>>b[i];
			mp2[b[i]]++;
		}
		for(int i=0;i<k;++i){
			cin>>c[i];
			mp3[c[i]]++;
		}
		vector<pair<ll,ll>> v;
		for(auto it1=mp1.begin();it1!=mp1.end();++it1){
			auto it2=mp2.find((*it1).first);
			auto it3=mp3.find((*it1).first);
			if(it2!=mp2.end()&&it3!=mp3.end()){
				check=0;
				ll tmp=min((*it1).second,(*it2).second);
				tmp=min(tmp,(*it3).second);
				v.pb({(*it1).first,tmp});
			}
		}
		if(check) cout<<"NO\n";
		else{
			for(int i=0;i<v.size();++i){
				while(v[i].second--){
					cout<<v[i].first<<" ";
				}
			}
			cout<<el;
		}
	}
}
