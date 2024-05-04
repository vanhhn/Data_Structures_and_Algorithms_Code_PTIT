#include<bits/stdc++.h>
using namespace std;
#define int long long
void implement(){
	int n,k;
	string x;
	cin>>n>>k>>x;
	int num=bitset<50>(x).to_ulong();
	int y=(num+k+1)%(1<<n);
	bitset<50>bs(y);
	string res=bs.to_string();
	res=res.substr(res.length()-n);
	cout<<res;
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		implement();
		cout<<"\n";
	}
}
