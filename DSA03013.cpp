#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

int check(vector<ll> v,ll n){
	for(int i=0;i<n;++i){
		if(v[i]==-1) return 0;
	}
	return 1;
}

bool cmp(ll a,ll b){
	return a>b;
}

int main(){
	int t; cin>>t; 
	while(t--){
		ll d; cin>>d; cin.ignore();
		string s; getline(cin,s);
		unordered_map<char,ll> mp;
		for(int i=0;i<s.size();++i){
			mp[s[i]]++;
		}
		vector<ll> v;
		for(auto it=mp.begin();it!=mp.end();++it){
			v.pb((*it).second);
		}
		sort(v.begin(),v.end(),cmp);
		ll n=v.size();
		if(d>n) cout<<-1<<el;
		else{
			vector<ll> ans(10001,-1);
			ll sum=0;
			for(int i=0;i<n;++i) sum+=v[i];
			ll loop=sum/d;
			if(sum%d!=0) loop++;
			int j=d;
			ll ok=0;
			for(int a=0;a<loop;++a){
//				if(ok) break;
				for(int i=a*d;i<a*d+d;++i){
					if(i-d<0){
						ans[i]=i;
						v[ans[i]]--;
						
					}
					else{
						if(v[ans[i-d]]>0){
							ans[i]=ans[i-d];
							v[ans[i-d]]--;
						}
						else{
							
							if(j<n){
								ans[i]=j;
								v[j]--;
								j++;
							}
						}
					}
				}
			}
			if(check(ans,sum)) cout<<1<<el;
			else cout<<-1<<el;
		}
	}
}