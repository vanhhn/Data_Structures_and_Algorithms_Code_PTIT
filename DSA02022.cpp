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

void khoitao(ll a[],ll n){
	for(int i=1;i<=n;++i){
		a[i]=0;
	}
}

void sinh(ll a[],ll n,ll &ok){
	int i=n;
	while(i>=1&&a[i]==2){
		a[i]=0;
		--i;
	}
	if(i==0) ok=0;
	else{
		a[i]=2;
	}
}

int check(ll a[],ll n){
	if(a[1]==0&&a[2]==0) return 0;
	if(a[3]==0&&a[4]==0) return 0;
	if(a[3]==2) return 0;
	if(a[5]==0) return 0;
	// for(int i=1;i<=4;++i){
	// 	if(a[i]!=a[9-i]) return 0;
	// }
	return 1;
}

int main(){
	fast();
	ll a[9];
	khoitao(a,8);
	ll ok=1;
	while(ok){
		if(check(a,8)){
			cout<<a[1]<<a[2]<<"/";
			cout<<a[3]<<a[4]<<"/";
			cout<<a[5]<<a[6]<<a[7]<<a[8]<<el;
		}
		sinh(a,8,ok);
	}
}