#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
string s;
int n,a[100];
void init(){
  s="";
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  ans.clear();
}
void Try(int i){
  if(i==0){
    return ;
  }
  s+="[";
  for(int j=1;j<=i-1;j++){
    s+=to_string(a[j])+" ";
  }
  s+=to_string(a[i])+"]";
  ans.push_back(s);
  s="";
  for(int k=1;k<=i-1;k++){
    a[k]=a[k]+a[k+1];
  }
  Try(i-1);
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
    Try(n);
    for(int i=ans.size()-1;i>=0;i--){
      cout<<ans[i]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}