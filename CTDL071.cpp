#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    vector<int>ans;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    int l=0,r=n-1;
    while(l<=r){
      if(l<r) {
        ans.push_back(a[r]);
        ans.push_back(a[l]);
      }
      else{
        ans.push_back(a[l]);
      }
      l++;
      r--;
    }
    for(int &x:ans)cout<<x<<" ";
     cout<<"\n";
  }
  return 0;
}