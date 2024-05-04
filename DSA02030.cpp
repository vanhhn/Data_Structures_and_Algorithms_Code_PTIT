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




int main(){
	fast();
	char c; cin>>c;
	ll k; cin>>k;
	unordered_map<string,ll> mp;
	queue<string> q;
	for(char d='A';d<=c;++d){
		string y="";
		y+=d;
		q.push(y);
	}
	while(!q.empty()&&q.front().size()<=k){
		string x=q.front();
		q.pop();
		if(x.size()==k){
			cout<<x<<el;
		}
		else{
			for(char d='A';d<=c;++d){
				string y=x;
				y+=d;
				sort(y.begin(),y.end());
				if(mp[y]==0){
					q.push(y);
					mp[y]=1;
				}
				
			}
		}
	}

}