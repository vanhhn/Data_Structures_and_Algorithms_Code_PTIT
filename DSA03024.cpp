#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
int mod=1e9+7;


void fast(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

struct val{
	ll first;
	ll second;
};

bool cmp(val a,val b){
    return a.second<b.second;
}

ll maxChainLen(val a[],ll n){
    sort(a,a+n,cmp);
    ll j=a[0].second;
    ll cnt=1;
    for(int i=1;i<n;++i){
        if(a[i].first>=j){
            cnt++;
            j=a[i].second;
        }
    }
    return cnt;
}

int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		val a[n];
		for(int i=0;i<n;++i){
			cin>>a[i].first>>a[i].second;
		}
		cout<<maxChainLen(a,n)<<el;
	}
}