#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      if (x == k)
      {
        ans = i;
      }
    }
    if (ans == -1)
    {
      cout << "NO\n";
    }
    else
    {
      cout << ans << "\n";
    }
  }
  system("pause");
}