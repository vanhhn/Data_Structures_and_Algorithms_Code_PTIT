#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	int t; cin>>t;
	while(t--){
		vector<vector<ll>> ans;
		ll n; cin>>n;
		vector<ll> a(n);
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		ans.pb(a);
		vector<ll> v(a.begin(),a.end());
		int j=n-1;
		while(v.size()!=1){
			for(int i=0;i<j;++i){
				v[i]=a[i]+a[i+1];
			}
			v.pop_back();
			--j;
			ans.pb(v);
			a.pop_back();
			for(int i=0;i<v.size();++i){
				a[i]=v[i];
			}
		}
		for(int i=0;i<=ans.size()-1;i++){
			cout<<"[";
			for(int j=0;j<ans[i].size();++j){
				if(j!=ans[i].size()-1){
					cout<<ans[i][j]<<" ";
				}
				else{
					cout<<ans[i][j]<<"]";
				}
			}
			cout<<"\n";
		}
		cout<<el;
	}
	system("pause");
}

