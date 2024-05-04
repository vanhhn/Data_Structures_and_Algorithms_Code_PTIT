#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    ll a[n],b[n];
    ll ans=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++){
      ans=ans+a[i]*b[i];
    }
    cout<<ans<<"\n";
  }
  system("pause");
}