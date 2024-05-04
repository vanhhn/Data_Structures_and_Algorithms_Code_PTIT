#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int n, ok, a[MAX];
void init()
{
  cin >> n;
  ok = 1;
  memset(a, 0, sizeof(a));
}
void in()
{
  for (int i = 1; i <= n; i++)
  {
    if (a[i] == 0)
      cout << "A";
    else
      cout << "B";
  }
  cout << " ";
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
    if (t > 0)
      cout << "\n";
  }
  system("pause");
}