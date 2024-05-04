#include<bits/stdc++.h>
using namespace std;
string add(string a,string b,int k){
  while(a.size()<b.size())a="0"+a;
  while(b.size()<a.size())b="0"+b;
  string ans;
  int nho=0;
  int l=a.size();
  for(int i=l-1;i>=0;i--){
    int so=a[i]-'0'+b[i]-'0'+nho;
    nho=so/k;
    ans=to_string(so%k)+ans;

  }
  if(nho>0)ans=to_string(nho)+ans;
  return ans;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int k;
    string s1,s2;
    cin>>k>>s1>>s2;
    cout<<add(s1,s2,k)<<"\n";
  }
  return 0;
}