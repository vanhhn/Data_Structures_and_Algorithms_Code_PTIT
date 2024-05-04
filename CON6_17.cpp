#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int ma=INT_MIN,mi=INT_MAX;
        for(int i=0;i<n;i++){
          int x;
          cin>>x;
          ma=max(ma,x);
        }
        for(int i=0;i<m;i++){
          int x;cin>>x;
          mi=min(mi,x);
        }
        cout<<1ll*mi*ma<<"\n";
    }
    return 0;
}