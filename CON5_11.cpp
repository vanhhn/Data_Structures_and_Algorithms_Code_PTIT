#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a[101];
void preCal(){
  a[0]=1;
  for(int i=1;i<=100;i++){
    for(int j=0;j<=i-1;j++){
      a[i]+=a[j]*a[i-j-1];
    }
  }
}
int main(){
  preCal();
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<a[n]<<"\n";
  }
  return 0;
}