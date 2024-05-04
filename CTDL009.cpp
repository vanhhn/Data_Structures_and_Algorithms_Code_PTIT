#include<bits/stdc++.h>
using namespace std;
char Xor(char c,char d){
  if(c!=d) return '1';
  return '0';
}
string bien_doi(string s){
  int l=s.size();
  string ans(l,'0');
  ans[0]=s[0];
  for(int i=1;i<l;i++){
    ans[i]=Xor(ans[i-1],s[i]);
  }
  return ans;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<bien_doi(s)<<"\n";
  }
  system("pause");
}