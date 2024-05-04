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
      a[i] = i;
    }
    do
    {
      for (int i = 1; i <= n; i++)
      {
        cout << a[i];
      }
      cout << " ";
    } while (next_permutation(a + 1, a + n + 1));
    if (t > 0)
      cout << "\n";
  }

  return 0;
}
