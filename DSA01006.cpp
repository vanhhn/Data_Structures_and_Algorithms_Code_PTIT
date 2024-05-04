#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int a[MAX], n, check[MAX];
void init()
{
  cin >> n;
  memset(check, 0, sizeof(check));
}
void in()
{
  for (int i = 1; i <= n; i++)
  {
    cout << a[i];
  }
  cout << " ";
}
void Try(int i)
{
  for (int j = n; j >= 1; j--)
  {
    if (!check[j])
    {
      check[j] = 1;
      a[i] = j;
      if (i == n)
      {
        in();
      }
      else
      {
        Try(i + 1);
      }
      check[j] = 0;
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
    Try(1);
    cout << "\n";
  }
}