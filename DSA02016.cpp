#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
int a[MAX], xuoi[MAX], nguoc[MAX], c[MAX], n, ans = 0;
void init()
{
  ans = 0;
  cin >> n;
  memset(c, 0, sizeof(c));
  memset(xuoi, 0, sizeof(xuoi));
  memset(nguoc, 0, sizeof(nguoc));
}
void Try(int i)
{
  for (int j = 1; j <= n; j++)
  {
    if (!c[j] && !xuoi[i - j + n] && !nguoc[i + j - 1])
    {
      c[j] = 1;
      xuoi[i - j + n] = 1;
      nguoc[i + j - 1] = 1;
      a[i] = j;
      if (i == n)
      {
        ans++;
      }
      else
      {
        Try(i + 1);
      }
      c[j] = 0;
      xuoi[i - j + n] = 0;
      nguoc[i + j - 1] = 0;
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
    cout << ans << "\n";
  }

  system("pause");
}
