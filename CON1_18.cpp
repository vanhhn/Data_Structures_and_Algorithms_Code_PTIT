#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, ans, x[100], ok;
ll s, a[100];

void init()
{
  ok = 1;
  memset(x, 0, sizeof(x));
  ans = -1;
  cin >> n >> s;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n, greater<ll>());
}

int res()
{
  int d = 0;
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (x[i])
    {
      sum += a[i];
      d++;
    }
  }
  if (sum == s)
  {
    ans = d;
  }
  return ans;
}

void sinh()
{
  int i = n - 1;
  while (i >= 0 && x[i] == 1)
  {
    x[i] = 0;
    i--;
  }
  if (i < 0)
  {
    ok = 0;
  }
  else
  {
    x[i] = 1;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int flag = 0;
    init();
    while (ok)
    {
      if (res() != -1)
      {
        break;
      }
      sinh();
    }
    cout << ans << "\n";
  }
  return 0;
}