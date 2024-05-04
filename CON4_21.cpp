#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
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
      ll a,n;
      cin>>a>>n;
      cout<<power(a,n)<<"\n";
    }
    return 0;
}