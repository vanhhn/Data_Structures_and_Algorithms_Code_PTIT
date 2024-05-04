#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod = 1e9 + 7;

void khoitao(ll a[], ll n)
{
  for (int i = 1; i <= n; ++i)
  {
    a[i] = i;
  }
}

void sinh(ll a[], ll n, ll &ok)
{
  ll i = n - 1;
  while (i >= 1 && a[i] > a[i + 1])
  {
    --i;
  }
  if (i == 0)
    ok = 0;
  else
  {
    int j = n;
    while (a[i] > a[j])
      --j;
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n + 1);
  }
}

int main()
{
  ll n;
  cin >> n;
  set<ll> se;
  for (int i = 1; i <= n; ++i)
  {
    ll x;
    cin >> x;
    se.insert(x);
  }
  ll a[n + 1];
  khoitao(a, n);
  ll ok = 1;
  while (ok)
  {
    for (int i = 1; i <= n; ++i)
    {
      auto it = se.begin();
      ll tmp = a[i] - 1;
      while (tmp--)
      {
        ++it;
      }
      cout << *it << " ";
    }
    cout << el;
    sinh(a, n, ok);
  }
}
