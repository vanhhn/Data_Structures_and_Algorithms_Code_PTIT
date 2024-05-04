#include <bits/stdc++.h>
using namespace std;
int bien_doi(int n)
{
  return n ^ (n>>1); 
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << bien_doi(n) << "\n";
  }
  system("pause");
}