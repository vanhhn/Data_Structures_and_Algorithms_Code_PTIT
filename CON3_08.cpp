#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int>a,pair<int,int>b){
  return a.second<b.second;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    pair<int,int>p[n];
    for(int i=0;i<n;i++){
      p[i].first=a[i];
      p[i].second=b[i];
    }
    sort(p,p+n,cmp);
    int ans=1;
    int end_time=p[0].second;
    for(int i=1;i<n;i++){
      if(p[i].first>=end_time){
        end_time=p[i].second;
        ans++;
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}