#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<int>adj[1001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
      for(int i=0;i<1001;i++){
        adj[i].clear();
      }
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=m;i++){
          int x,y;
          cin>>x>>y;
          adj[x].push_back(y);
          adj[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
          cout<<i<<": ";
          for(int x:adj[i]){
            cout<<x<<" ";
          }
          cout<<"\n";
        }
    }
    return 0;
}