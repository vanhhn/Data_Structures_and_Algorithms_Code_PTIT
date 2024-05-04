#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define MAX 20
struct matrix
{
  ll f[MAX][MAX];
};
matrix nhan(matrix a, matrix b, int n)
{
  matrix c;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      c.f[i][j] = 0;
      for (int k = 0; k < n; k++)
      {
        c.f[i][j] = (c.f[i][j] % mod + (a.f[i][k] * b.f[k][j]) % mod) % mod;
      }
    }
  }
  return c;
}
matrix power(matrix a, int n, int k)
{
  if (k == 1)
    return a;
  matrix res = power(a, n, k / 2);
  if (k % 2 == 0)
  {
    return nhan(res, res, n);
  }
  else
  {
    return nhan(a, nhan(res, res, n), n);
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    matrix a;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        ll x;
        cin >> x;
        a.f[i][j] = x;
      }
    }
    ll ans = 0;
    matrix res = power(a, n, k);
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i + j == n - 1)
        {
          ans = (ans % mod + res.f[i][j] % mod) % mod;
        }
      }
    }
    cout << ans << "\n";
  }
  system("pause");
}