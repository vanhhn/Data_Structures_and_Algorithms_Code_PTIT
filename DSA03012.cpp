#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		map<char,ll> mp;
		for(int i=0;i<s.size();++i){
			mp[s[i]]++;
		}
		int l=s.size();
		ll x=1;
		for(auto it=mp.begin();it!=mp.end();++it){
			x=max(x,(*it).second);
		}
		if(x-(l-x)>=2) cout<<"-1\n";
		else cout<<"1\n";
	}
}
