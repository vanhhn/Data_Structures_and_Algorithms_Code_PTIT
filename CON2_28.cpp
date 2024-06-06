#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int n,x,ok,a[100],X[100];
void init(){
  cin>>n>>x;
  ok=0;
  for(int i=1;i<=n;i++)cin>>a[i];
  sort(a+1,a+n+1);
  memset(X,0,sizeof(X));
}
void Try(int i,int pos,int sum){
  for(int j=pos;j<=n;j++){
    if(sum+a[j]<=x){
      X[i]=a[j];
      sum+=a[j];
      if(sum==x){
        ok=1;
        cout<<"[";
        for(int m=1;m<=i-1;m++){
          cout<<X[m]<<" ";
        }
        cout<<X[i]<<"] ";
      }
      else{
        Try(i+1,j,sum);
      }
      sum-=a[j];
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
        Try(1,1,0);
        if(ok==0){
          cout<<"-1\n";
        }
        cout<<"\n";
    }
    return 0;
}