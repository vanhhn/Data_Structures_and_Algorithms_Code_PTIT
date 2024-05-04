#include<bits/stdc++.h>
using namespace std;
int n,check[1005],cycle;
int a[1005][1005];
void dfs(int u,int p)
{
	check[u]=1;
	for(int v=1;v<=n;v++){
		if(a[u][v]){
			if(!check[v]) dfs(v,u);
			else if(check[v]&&v!=p) cycle=1;
		}
	}
}
void sovle(){
	cin>>n;
	int e=n-1;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	cycle=0;
	for(int i=1;i<=e;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	dfs(1,0);
	for(int i=1;i<=n;i++){
		if(check[i]==0) cycle=1;
	}
	if(cycle) cout<<"NO";
	else cout<<"YES";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		sovle();
		if(t>0) cout<<"\n";
	}
}