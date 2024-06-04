#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
  int t;
  cin>>t;
  while(t--){
    int s;
    cin>>s;
    int ans=0;
    for(int i=9;i>=0;i--){
      ans+=s/a[i];
      s%=a[i];
    }
    cout<<ans<<"\n";
  }
  return 0;
}