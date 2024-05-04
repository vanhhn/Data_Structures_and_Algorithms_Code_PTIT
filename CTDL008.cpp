#include<bits/stdc++.h>
using namespace std;
char Xor(char c,char d){
  if(c!=d) return '1';
  return '0';
}
string bien_doi(string s){
  string ans="";
  ans+=s[0];
  for(int i=1;i<s.size();i++){
    ans+=Xor(s[i-1],s[i]);
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