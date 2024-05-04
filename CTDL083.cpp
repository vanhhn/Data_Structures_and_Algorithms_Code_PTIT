#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
   
   }
   reverse(a,a+k);
   
  for(int i=0;i<n;i++){
   cout<<a[i]<<" ";
  }
  cout<<"\n";
  }
  system("pause");
}