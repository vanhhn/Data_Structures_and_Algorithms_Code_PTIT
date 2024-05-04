#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],ok;
void init(){
  cin>>n>>k;
  ok=1;
  for(int i=1;i<=k;i++){
    a[i]=i;
  }
}
void in(){
  for(int i=1;i<=k;i++){
    cout<<a[i];
  }
  cout<<" ";
}
void next(){
  int i=k;
  while(i>0&&a[i]==n-k+i){
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]+=1;
    for(int j=i+1;j<=k;j++){
      a[j]=a[i]+j-i;
    }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
    while(ok){
      in();
      next();
    }
    if(t>0) cout<<"\n";
  }
  system("pause");
}