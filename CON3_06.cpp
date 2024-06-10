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
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      vector<int>b(a,a+n);
      sort(b.begin(),b.end());
      int ok=1;
      for(int i=0;i<n;i++){
        if(a[i]!=b[i]&&b[i]!=a[n-i-1]){
          ok=0;
          cout<<"No\n";
          break;
        }
      }
      if(ok){
        cout<<"Yes\n";
      }
        
    }
    return 0;
}