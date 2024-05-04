#include <bits/stdc++.h>

using namespace std;

void Try(string s, int i)
{
  if (i == s.size())
  {
    for (int i = 0; i < s.size(); i++)
      cout << s[i];
    cout << endl;
    return;
  }

  if (s[i] == '?')
  {
    s[i] = '0';
    Try(s, i);
    s[i] = '1';
    Try(s, i);
    s[i] = '?';
  }
  else
  {
    Try(s, i + 1);
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    string a = "";
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] != ' ')
        a += s[i];
    }
    Try(a, 0);
  }
  return 0;
}
