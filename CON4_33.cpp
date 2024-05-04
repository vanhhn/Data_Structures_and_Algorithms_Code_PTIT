#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll daoNguoc(ll a){
  ll ans=0;
  while(a!=0){
    ans=ans*10+a%10;
    a/=10;
  }
  return ans;
}
ll power(ll a, ll n) {
    if (n == 0) return 1;
    ll res = power(a, n / 2);
    if (n % 2 == 0)
        return ((res % mod) * (res % mod)) % mod;
    else {
        return ((((res % mod) * (res % mod)) % mod) * (a % mod)) % mod;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      ll a;
      cin>>a;
      ll n=daoNguoc(a);
      cout<<power(a,n)<<"\n";
    }
    return 0;
}