#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
int a[MAX], n, k, ok = 1;
void init()
{
  cin >> n >> k;
  for (int i = 1; i <= k; i++)
  {
    cin >> a[i];
  }
}
void in()
{
  for (int i = 1; i <= k; i++)
  {
    cout << a[i] << " ";
  }
  cout << "\n";
}
void next()
{
  int i = k;
  while (i > 0 && a[i] == n - k + i)
  {
    i--;
  }
  if (i <= 0)
  {
    ok = 0;
  }
  else
  {
    a[i]++;
    for (int j = i + 1; j <= k; j++)
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
    init();
    next();
    if (ok == 0)
    {
      for (int i = 1; i <= k; i++)
      {
        cout << i << " ";
      }
      cout << "\n";
    }
    else
    {
      in();
    }
  }

  return 0;
}
