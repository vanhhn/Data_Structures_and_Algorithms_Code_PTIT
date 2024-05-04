#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int n, a[MAX], ok;
void init()
{
  ok = 1;
  cin >> n;
  memset(a, 0, sizeof(a));
}
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
  while (i > 0 && a[i] == 1)
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
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    init();
    while (ok)
    {
      in();
      next();
    }
  }
  system("pause");
}