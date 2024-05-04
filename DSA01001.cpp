#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod = 1e9 + 7;

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string s;
    getline(cin, s);
    ll ok = 1;
    ll i = s.size();
    s = "@" + s;
    while (i >= 1 && s[i] == '1')
    {
      s[i] = '0';
      --i;
    }
    if (i == 0)
      ok = 0;
    else
    {
      s[i] = '1';
    }
    //		cout<<s<<el;
    if (ok == 0)
    {
      for (int j = 0; j < s.size() - 1; ++j)
      {
        cout << "0";
      }
      cout << el;
    }
    else
    {
      s.erase(0, 1);
      cout << s << el;
    }
  }
}
