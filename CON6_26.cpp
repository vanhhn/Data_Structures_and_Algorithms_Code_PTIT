#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int>> vt;
typedef vector<pair<int, int>> vp;
const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;

void FileIO()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a;
	    for (int i = 0; i < n; i++)
	    {
	        int x;
	        cin >> x;
	        a.push_back(x);
	    }
	    for (int i = 0; i < n - 1; i++)
	    {
	        for (int j = i + 1; j < n; j++)
	        {
	            if (a[i] > a[j])
	                swap(a[i], a[j]);
	        }
	        cout << "Buoc " << i + 1 << ": ";
	        for (int j = 0; j < n; j++)
	            cout << a[j] << " ";
	        cout << endl;
	    }
	}
    return 0;
}