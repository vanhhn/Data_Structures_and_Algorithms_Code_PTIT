#include <bits/stdc++.h>
using namespace std;
string add(string a, string b)
{
  while (a.size() < b.size())
    a = "0" + a;
  while (b.size() < a.size())
    b = "0" + b;
  string ans = "";
  int nho = 0, l = a.size();
  for (int i = l - 1; i >= 0; i--)
  {
    int so = a[i] - '0' + b[i] - '0' + nho;
    nho = so / 10;
    ans = (char)(so % 10 + '0') + ans;
  }
  if (nho > 0)
    ans = "1" + ans;
  return ans;
}
string biendoinho(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '5')
      s[i] = '3';
  }
  return s;
}
string biendoilon(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '3')
      s[i] = '5';
  }
  return s;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    string a = biendoilon(s1);
    string b = biendoilon(s2);
    string c = biendoinho(s1);
    string d = biendoinho(s2);
    cout << add(c, d) << " " << add(a, b) << "\n";
  }
  system("pause");
}
