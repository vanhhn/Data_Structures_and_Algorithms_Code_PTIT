#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define pb push_back
#define all(x) x.begin(), x.end()
int mod = 1e9 + 7;
void fast()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}
int main()
{
  fast();
  ll n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  ll x;
  cin >> x;
  for (int i = 0; i < n; ++i)
  {
    if (a[i] != x)
      cout << a[i] << " ";
  }
}
