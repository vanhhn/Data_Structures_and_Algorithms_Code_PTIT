#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a)cin>>x;
    sort(a,a+n);
    ll a1=0,a2=0;
    for(int i=0;i<n;i+=2){
      a1=a1*10+a[i];
    }
    for(int i=1;i<n;i+=2){
      a2=a2*10+a[i];
    }
    cout<<a1+a2<<"\n";
  }
  return 0;
}