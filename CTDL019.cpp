#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    if (next_permutation(a, a + n))
    {
      for (int i = 0; i < n; i++)
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
    if (t > 0)
      cout << "\n";
  }
  system("pause");
}