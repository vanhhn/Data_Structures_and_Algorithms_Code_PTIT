#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int t;
  cin>>t;
  while(t--){
	int n, b = 1;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		bool k = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				k = true;
			}
		}
		if (k == false)
			break;
		cout << "Buoc " << b++ << ": ";
		for (int j = 0; j < n; j++)
			cout << a[j] << " ";
		cout << endl;
	}
  }
}