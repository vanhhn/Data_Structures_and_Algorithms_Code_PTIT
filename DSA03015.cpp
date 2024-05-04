#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


int main(){
	int t; cin>>t;
	while(t--){
		ll n,s,m; cin>>n>>s>>m;
		if(m>=n) cout<<"-1\n";
		else{
			ll d=n-m;
			if(6*d<m) cout<<"-1\n";
			else{
				ll tmp1=s*m;
				if(tmp1%n==0) cout<<tmp1/n<<el;
				else cout<<(tmp1/n)+1<<el;
			}
		}
	}
}
