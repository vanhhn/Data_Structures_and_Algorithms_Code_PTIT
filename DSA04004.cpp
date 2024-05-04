#include<bits/stdc++.h>
using namespace std;
long long count(int n,long long k){
long long kt = pow(2,n-1);
if(k==kt) return n;
else if(k<kt) return count(n-1,k);
else return count(n-1,k-kt);
}
int main(){
int t;
cin>>t;
int n;
long long k;
for(int i = 0 ; i < t ; i++){
cin>>n>>k;
cout<<count(n,k)<<endl;
}
return 0;
}