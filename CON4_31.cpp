#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
struct matrix{
  ll f[15][15];
};
matrix nhan(matrix a,matrix b,int n){
  matrix c;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      c.f[i][j]=0;
      for(int k=0;k<n;k++){
        c.f[i][j]+=(a.f[i][k]*b.f[k][j])%mod;
        c.f[i][j]%=mod;
      }
    }
  }
  return c;
}
matrix power(matrix a,int k,int n){
  if(k<=1){
    return a;
  }
  matrix res=power(a,k/2,n);
  if(k%2==0) return nhan(res,res,n);
  else{
    return nhan(a,nhan(res,res,n),n);
  }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        matrix a;
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            cin>>a.f[i][j];
          }
        }
        matrix ans=power(a,k,n);
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            cout<<ans.f[i][j]<<" ";
          }
          cout<<"\n";
        }
    }
    return 0;
}