#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
  return a.second < b.second;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      p[i].first = x;
    }
    for (int i = 0; i < n; i++)
    {
      int y;
      cin >> y;
      p[i].second = y;
    }
    sort(p, p + n, cmp);
    int ans = 1;
    int end_time = p[0].second;
    for (int i = 1; i < n; i++)
    {
      if (p[i].first >= end_time)
      {
        ans++;
        end_time = p[i].second;
      }
    }
    cout << ans << "\n";
  }
  system("pause");
}