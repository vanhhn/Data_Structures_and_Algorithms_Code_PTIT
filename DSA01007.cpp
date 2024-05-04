#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int n, a[MAX];
void init()
{
  cin >> n;
}
void in()
{
  for (int i = 1; i <= n; i++)
  {
    if (a[i] == 0)
    {
      cout << "A";
    }
    else
    {
      cout << "B";
    }
  }
  cout << " ";
}
void Try(int i)
{
  for (int j = 0; j <= 1; j++)
  {
    a[i] = j;
    if (i == n)
    {
      in();
    }
    else
    {
      Try(i + 1);
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