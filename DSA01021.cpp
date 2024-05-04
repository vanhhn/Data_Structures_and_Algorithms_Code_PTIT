#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		ll a[k+1];
		for(int i=1;i<=k;++i){
			cin>>a[i];
		}
		ll ok=1;
		vector<ll> v(a+1,a+k+1);
		sort(v.begin(),v.end());
		ll j=k;
		while(j>=1&&a[j]==n-k+j){
			--j;
		}
		if(j==0) ok=0;
		if(ok){
			a[j]++;
			for(int i=j+1;i<=k;++i){
				a[i]=a[j]+i-j;
			}
			sort(a+1,a+k+1);
			int t1=1,t2=0;
			int dem=0;
			while(t1<=k&&t2<v.size()){
				if(a[t1]==v[t2]){
					dem++;
					t1++;
					t2++;
				}
				else if(a[t1]>v[t2]){
					t2++;
				}
				else{
					t1++;
				}
			}
			cout<<k-dem<<el;
		}
		else{
			cout<<k<<el;
		}
	}
}
