#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bienDoiNho(string a)
{
  ll ans = 0;
  for (char c : a)
  {
    if (c == '6')
    {
      ans = ans * 10 + 5;
    }
    else
    {
      ans = ans * 10 + (c - '0');
    }
  }
  return ans;
}
ll bienDoiLon(string a)
{
  ll ans = 0;
  for (char c : a)
  {
    if (c == '5')
    {
      ans = ans * 10 + 6;
    }
    else
    {
      ans = ans * 10 + (c - '0');
    }
  }
  return ans;
}
int main()
{

  string s1, s2;
  cin >> s1 >> s2;
  ll a = bienDoiLon(s1);
  ll b = bienDoiLon(s2);
  ll c = bienDoiNho(s1);
  ll d = bienDoiNho(s2);
  cout << c + d << " " << a + b;
  return 0;
}
