#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n)
{
  if (n <= 3)
    return n > 1;
  if (n % 3 == 0 || n % 2 == 0)
    return 0;
  for (ll i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  ll n;
  cin >> n;
  if (check(n))
  {
    cout << "YES";
  }
  else
  {
    int ans = 1;
    for (int i = 2; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        if (ans < i)
        {
          ans = i;
        }
        if (ans < n / i)
        {
          ans = n / i;
        }
      }
    }
    cout << ans;
  }
  system("pause");
}