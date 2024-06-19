#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int l[n],ans=INT_MIN;
    for(int i=0;i<n;i++){
      l[i]=a[i];
      for(int j=0;j<i;j++){
        if(a[i]>a[j]){
          l[i]=max(l[i],l[j]+a[i]);
        }
        ans=max(ans,l[i]);
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}