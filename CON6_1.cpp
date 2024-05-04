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
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      vector<int>v;
      sort(a,a+n);
      int l=0,r=n-1;
      while(l<r){
        v.push_back(a[r]);
        v.push_back(a[l]);
        l++;
        r--;
      }
      if(n%2==1){
        v.push_back(a[n/2]);
      }
      for(int x:v)cout<<x<<" ";
      cout<<"\n";
        
    }
    return 0;
}