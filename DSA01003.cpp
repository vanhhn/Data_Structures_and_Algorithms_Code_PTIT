#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    if (next_permutation(a + 1, a + n + 1))
    {
      for (int i = 1; i <= n; i++)
      {
        cout << a[i] << " ";
      }
    }
    else
    {
      for (int i = 1; i <= n; i++)
      {
        cout << i << " ";
      }
    }
    cout << "\n";
  }

  return 0;
}
