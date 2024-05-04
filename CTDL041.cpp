#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];

int main()
{
  int t;
  cin >> t;
  while (t--)
  {

    int d, c;
    cin >> d >> c;
    int x, y;
    while (cin >> x >> y)
    {
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
    for (int i = 1; i <= d; i++)
    {
      cout << "D" << i << ": ";
      for (int j = 0; j < adj[i].size(); j++)
      {
        cout << adj[i][j] << " ";
      }
      cout << "\n";
    }
  }
  system("pause");
}