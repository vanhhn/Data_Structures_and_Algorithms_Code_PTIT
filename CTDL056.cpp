#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bienDoi(string s)
{
  ll ans = 0;
  ll lt = 1;
  for (int i = s.size() - 1; i >= 0; i--)
  {
    ans += (s[i] - '0') * lt;
    lt *= 2;
  }
  return ans;
}
int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    ll x = bienDoi(s1);
    ll y = bienDoi(s2);
    cout << x * y << "\n";
  }
  return 0;
}