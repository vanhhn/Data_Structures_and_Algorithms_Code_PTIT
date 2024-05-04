#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
struct matrix{
 ll f[2][2];
};
matrix nhanMaTran(matrix a,matrix b){
  matrix c;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      c.f[i][j]=0;
      for(int k=0;k<2;k++){
        c.f[i][j]=(c.f[i][j]%mod+(a.f[j][k]*b.f[k][i])%mod)%mod;
      }
    }
  }
  return c;
}
matrix powerMod(matrix a,int n){
  if(n<=1) return a;
  matrix res=powerMod(a,n/2);
  if(n%2==0){
    return nhanMaTran(res,res);
  }
  else{
    return nhanMaTran(a,nhanMaTran(res,res));
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    matrix a;
    int n;
    cin>>n;
    a.f[0][0]=1;
    a.f[0][1]=1;
    a.f[1][0]=1;
    a.f[1][1]=0;
    matrix res=powerMod(a,n);
    cout<<res.f[1][0]<<"\n";
  }
  system("pause");
}