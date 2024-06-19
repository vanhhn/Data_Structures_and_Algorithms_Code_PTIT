#include<bits/stdc++.h>
using namespace std;
int n,a[105][105],cmin,d,check[105],X[105],ans;
void init(){
  cmin=INT_MAX;
  ans=INT_MAX;
  d=0;
  memset(check,0,sizeof(check));
  memset(X,0,sizeof(X));
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
      if(a[i][j]!=0){
        cmin=min(cmin,a[i][j]);
      }
    }
  }
}
void Try(int i){
  for(int j=1;j<=n;j++){
    if(!check[j]){
      X[i]=j;
      check[j]=1;
      d+=a[X[i-1]][X[i]];
      if(i==n){
        ans=min(ans,d+a[X[n]][1]);
      }
      else if((n-i+1)*cmin+d<ans){
        Try(i+1);
      }
      check[j]=0;
      d-=a[X[i-1]][X[i]];
    }
  }
}
int main(){
  init();
  X[1]=1;
  check[1]=1;
  Try(2);
  cout<<ans;
  return 0;
}