#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
		cout << "Buoc " << i + 1 << ": ";
		for (int j = 0; j < n; j++)
			if(j!=n-1)cout << a[j] << " ";
      else cout<<a[j];
		cout << endl;
	}
	}
}