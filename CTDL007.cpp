#include<bits/stdc++.h>
using namespace std;
int n,a[100],check[100];
void init(){
  cin>>n;
  memset(check,0,sizeof(check));
}
void in(){
  for(int i=1;i<=n;i++){
    cout<<a[i];
  }
  cout<<" ";
}
void Try(int i){
  for(int j=n;j>=1;j--){
    if(!check[j]){
      a[i]=j;
      check[j]=1;
      if(i==n){
        in();
      }
      else{
        Try(i+1);
      }
      check[j]=0;
    }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
    Try(1);
    if(t>0) cout<<"\n";
  }
  system("pause");
}