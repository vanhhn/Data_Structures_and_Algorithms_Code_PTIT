#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
struct matrix {
	ll f[2][2];
};
matrix nhan(matrix a,matrix b){
	matrix c;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c.f[i][j]=0;
			for(int k=0;k<2;k++){
				c.f[i][j]+=(a.f[i][k]*b.f[k][j])%mod;
				c.f[i][j]%=mod;
			}
		}
	}
	return c;
}
matrix power(matrix a,int n){
	if(n==1) return a;
	matrix res=power(a,n/2);
	if(n%2==0){
		return nhan(res,res);
	}
	else{
		return nhan(a,nhan(res,res));
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		matrix a;
		a.f[0][0]=a.f[0][1]=a.f[1][0]=1;
		a.f[1][1]=0;
		matrix res=power(a,n+1);
		cout<<res.f[1][1]<<"\n";
	}
}
