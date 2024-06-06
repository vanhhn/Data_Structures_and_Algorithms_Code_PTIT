#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const int n=8;
int a[10][10],cot[30],nguoc[30],xuoi[30],ans,x[10];
void init(){
  ans=INT_MIN;
  memset(cot,0,sizeof(cot));
  memset(nguoc,0,sizeof(nguoc));
  memset(xuoi,0,sizeof(xuoi));
  memset(x,0,sizeof(x));
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }


}
void Try(int i){
  for(int j=1;j<=n;j++){
    if(!cot[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
      x[i]=j;
      cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
      if(i==n){
        int sum=0;
        for(int m=1;m<=n;m++){
          sum+=a[m][x[m]];
        }
        ans=max(ans,sum);
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