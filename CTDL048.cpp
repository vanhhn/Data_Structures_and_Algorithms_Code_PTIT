#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long tu, mau;
    cin >> tu >> mau;
    long long res = 0;
    while (true)
    {
      if (mau % tu == 0)
      {
        cout << "1/" << mau / tu << "\n";
        break;
      }
      else
      {
        res = mau / tu + 1;
        cout << "1/" << res << " + ";
        tu = tu * res - mau;
        mau = mau * res;
      }
    }
  }
 //system("pause");
}