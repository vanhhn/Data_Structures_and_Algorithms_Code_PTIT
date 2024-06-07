#include <bits/stdc++.h>
using namespace std;
int n, a[100];
void init()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
}
void Try(int i)
{
  if (i == 0)
  {
    return;
  }
  cout << "[";
  for (int j = 1; j <= i - 1; j++)
  {
    cout << a[j] << " ";
  }
  cout << a[i] << "]\n";
  for (int k = 1; k <= i - 1; k++)
  {
    a[k] = a[k] + a[k + 1];
  }
  Try(i - 1);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    init();
    Try(n);
  }
  return 0;
}