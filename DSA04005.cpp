#include<bits/stdc++.h>
using namespace std;
long long I, a[100];
int n;
void fibo(){
for(int i=0;i<=93;i++){
if(i==0) a[i]=0;if(i==1) a[i]=1;
if(i>=2) a[i]=a[i-1]+a[i-2];
}
}
char tim(long long a[],int n,long long i){
if(n==1) return 'A';
if(n==2) return 'B';
if(i<=a[n-2]) return tim(a,n-2,i);
if(i>a[n-2]) return tim(a,n-1,i-(a[n-2]));
}
int main(){
int t;
cin>>t;
fibo();
while(t--){
cin>>n>>I;
cout<<tim(a,n,I)<<endl;
}
}