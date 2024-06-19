#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int n,cycle,check[1001];
vector<int>adj[1001];
void init(){
  cin>>n;
  for(int i=0;i<1001;i++){
    check[i]=0;
    adj[i].clear();
  }
  cycle=0;
  for(int i=1;i<=n-1;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

}
// kiem tra xem co canh nguoc hay khong
void dfs(int u,int p){
  check[u]=1;
  for(int x:adj[u]){
    if(!check[x]){
      dfs(x,u);
    }
    else if(check[x]&&x!=p){
      cycle=1;
    }
  }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        dfs(1,-1);
        for(int i=1;i<=n;i++){
          if(!check[i]){
            cycle=1;
          }
        }
        if(cycle==1){
          cout<<"NO\n";
        }
        else{
          cout<<"YES\n";
        }
    }
    return 0;
}