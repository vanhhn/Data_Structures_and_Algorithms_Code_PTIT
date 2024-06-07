#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(vector<int> &A)
{
  int N = A.size();
  int total = accumulate(A.begin(), A.end(), 0);
  int target = total / 2;

  bitset<100001> dp;
  dp[0] = 1; // Có thể đạt được tổng 0

  for (int num : A)
  {
    dp |= dp << num;
  }

  int best = 0;
  for (int i = target; i >= 0; --i)
  {
    if (dp[i])
    {
      best = i;
      break;
    }
  }

  ll sum1 = best;
  ll sum2 = total - best;
  return sum1 == sum2;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> A[i];
    }
    if (check(A))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}