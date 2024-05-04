#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;
int main(){
	 int t;  cin >> t;
	 while(t--){
		 int n;  cin >> n;
		 int a[n];
		 for(int i = 0; i < n; i++){
			  cin >> a[i];
		 }
		 sort(a, a + n);
		 ll res = 0;
		 for(int i = 0; i < n; i++){
			  res += a[i] * i;
			  res %= MOD;
		 }
		  cout << res << endl;
	 }
}