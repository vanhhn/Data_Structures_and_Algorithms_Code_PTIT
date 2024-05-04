#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{

  int t, x;
  cin >> t;
  string s;
  queue<int> q;
  while (t--)
  {
    cin >> s;
    if (s == "PUSH")
    {
      cin >> x;
      q.push(x);
    }
    else if (s == "POP")
    {
      if (!q.empty())
      {
        q.pop();
      }
    }
    else if (s == "PRINTFRONT")
    {
      if (!q.empty())
      {
        cout << q.front() << endl;
      }
      else
      {
        cout << "NONE" << endl;
      }
    }
  }
  return 0;
}