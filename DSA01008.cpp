#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int n,k,a[MAX],ok=1;
void init(){
	cin>>n>>k;
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<"\n";
}
void next(){
	int i=n;
	while(a[i]==1&&i>0){
		a[i]=0;
		i--;
	}
	if(i<=0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}
int check(int a[],int n,int k){
	int d=0;
	for(int i=1;i<=n;i++){
		if(a[i]){
			d++;
		}
	}
	return d==k;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		while(ok){
			next();
			if(check(a,n,k)){
				in();
			}
		}
		ok=1;
	}
}
