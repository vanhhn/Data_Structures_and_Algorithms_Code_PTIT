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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        
        vector<int> hop;
        vector<int> giao;
        int i = 0, j = 0;
        
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                giao.push_back(a[i]);
                hop.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j]){
                hop.push_back(a[i]);
                i++;
            }
            else {
                hop.push_back(b[j]);
                j++;
            }
        }
        
        while (i < n) {
            hop.push_back(a[i]);
            i++;
        }
        while (j < m) {
            hop.push_back(b[j]);
            j++;
        }
        
        for (int i = 0; i < hop.size(); i++) {
            if (i != hop.size() - 1) {
                cout << hop[i] << " ";
            }
            else {
                cout << hop[i] << "\n";
            }
        }
        
        for (int i = 0; i < giao.size(); i++) {
            if (i != giao.size() - 1) {
                cout << giao[i] << " ";
            }
            else {
                cout << giao[i] << "\n";
            }
        }
    }
    return 0;
}