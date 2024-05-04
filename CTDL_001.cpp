#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok = 1;
void in()
{
  for (int i = 1; i <= n; i++)
  {
    cout << a[i] << " ";
  }
  cout << "\n";
}
void next()
{
  int i = n;
  while (a[i] == 1 && i > 0)
  {
    a[i] = 0;
    i--;
  }
  if (i <= 0)
  {
    ok = 0;
  }
  else
  {
    a[i] = 1;
  }
}
bool check()
{
  int l = 1, r = n;
  while (l <= r)
  {
    if (a[l] != a[r])
    {
      return false;
    }
    else
    {
      l++;
      r--;
    }
  }
  return true;
}
int main()
{
  cin >> n;
  while (ok)
  {
    if (check())
    {
      in();
    }
    next();
  }
  // system("pause");
}