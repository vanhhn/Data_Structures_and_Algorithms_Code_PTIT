#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	 int t;  cin >> t;
	 while(t--){
		 int n, k;  cin >> n >> k;
		 int a[n];
		 for(int i = 0; i < n; i++){
			  cin >> a[i];
		 }
		 ll sum1 = 0, sum2 = 0;
		 sort(a, a + n);
		 for(int i = 0; i < min(k, n - k); i++){
			   sum1 += a[i];
		 }
		 for(int i = min(k, n - k); i < n; i++){
			  sum2 += a[i];
		 }
		  cout << sum2 - sum1 << endl;
	 }
}