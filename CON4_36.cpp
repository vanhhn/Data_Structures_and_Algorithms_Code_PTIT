#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll bienDoi(string &s){
  ll ans=0;
  ll co2=1;
  for(int i=s.size()-1;i>=0;i--){
       ans+=co2*(s[i]-'0');
       co2*=2;
  }
  return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       string a,b;
       cin>>a>>b;
       ll x=bienDoi(a);
       ll y=bienDoi(b);
       cout<<x*y<<"\n";

    }
    return 0;
}