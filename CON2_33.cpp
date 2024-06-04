#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int n,a[100],cot[100],xuoi[100],nguoc[100],ans;
void init(){
  cin>>n;
  memset(a,0,sizeof(a));
  memset(cot,0,sizeof(cot));
  memset(xuoi,0,sizeof(xuoi));
  memset(nguoc,0,sizeof(nguoc));
  ans=0;
}
void Try(int i){
  for(int j=1;j<=n;j++){
    if(!cot[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
      a[i]=j;
      cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
      if(i==n){
        ans++;
      }
      else{
        Try(i+1);
      }
      cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=0;
    }
  }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        Try(1);
        cout<<ans<<"\n";
    }
    return 0;
}