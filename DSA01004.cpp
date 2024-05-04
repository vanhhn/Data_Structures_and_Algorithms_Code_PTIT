#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod = 1e9 + 7;

void khoitao(ll a[], ll k)
{
  for (int i = 1; i <= k; ++i)
  {
    a[i] = i;
  }
}

void sinh(ll a[], ll n, ll k, ll &ok)
{
  ll i = k;
  while (i >= 1 && a[i] == n - k + i)
  {
    --i;
  }
  if (i == 0)
    ok = 0;
  else
  {
    a[i]++;
    for (int j = i + 1; j <= k; ++j)
    {
      a[j] = a[i] + j - i;
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    ll a[k + 1];
    khoitao(a, k);
    ll ok = 1;
    while (ok)
    {
      for (int i = 1; i <= k; ++i)
      {
        cout << a[i];
      }
      cout << " ";
      sinh(a, n, k, ok);
    }
    cout << el;
  }
}
