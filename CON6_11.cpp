#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int ans=INT_MAX;
    for(int &x:a)cin>>x;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
          if(abs(ans)>abs(a[i]+a[j])){
            ans=a[i]+a[j];
          }
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}