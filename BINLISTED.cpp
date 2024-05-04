#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool check()
{
  if (n < 2)
    return true;
  for (int i = 1; i < n; i++)
  {
    if (a[i] == 0 && a[i + 1] == 0)
      return false;
  }
  return true;
}
void in()
{
  for (int i = 1; i <= n; i++)
  {
    cout << a[i];
  }
  cout << "\n";
}
void Try(int i)
{
  for (int j = 0; j <= 1; j++)
  {
    a[i] = j;
    if (i == n)
    {
      if (check())
      {
        in();
      }
    }
    else
    {
      Try(i + 1);
    }
  }
}
int main()
{
  cin >> n;
  Try(1);
  system("pause");
}