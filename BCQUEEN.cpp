#include<bits/stdc++.h>
using namespace std;
int ans=0;
int n,a[100],check[100],xuoi[100],nguoc[100];
void init(){
  cin>>n;
  memset(check,0,sizeof(check));
  memset(xuoi,0,sizeof(xuoi));
  memset(nguoc,0,sizeof(nguoc));
}
void Try(int i){
  for(int j=1;j<=n;j++){
    if(!check[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
      a[i]=j;
      check[j]=1;
      xuoi[i-j+n]=1;
      nguoc[i+j-1]=1;
      if(i==n){
        ans++;
      }
      else{
        Try(i+1);
      }
      check[j]=0;
      xuoi[i-j+n]=0;
      nguoc[i+j-1]=0;
    }

  }
}
int main(){
    init();
    Try(1);
    cout<<ans;
    system("pause");
}