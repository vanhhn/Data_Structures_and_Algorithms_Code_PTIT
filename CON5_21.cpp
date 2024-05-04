#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int dp[k+1] = {0}; 

        dp[0] = 1; 
        for(int i = 1; i <= k; i++){
            for(int j = 0; j < n; j++){
                if(i >= a[j]){
                    dp[i] += dp[i - a[j]];
                    dp[i] %= mod;
                }
            }
        }

        cout << dp[k] << "\n";
    }
    return 0;
}