#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	 int t;  cin >> t;
	 while(t--){
		 int n;  cin >> n;
		 int a[n];
		 for(int i = 0; i < n; i++){
			  cin >> a[i];
		 }
		 ll sum1 = 0, sum2 = 0;
		 sort(a, a + n);
		 for(int i = 0; i < n; i += 2){
			  sum1 = sum1 * 10 + a[i];
		 }
		 for(int i = 1; i < n; i += 2){
			  sum2 = sum2 * 10 + a[i];
		 }
		 cout << sum1 + sum2 << endl;
	 }
}