#include<bits/stdc++.h>
using namespace std;
#define ll long long
string nhanHaiSoLon(string a,string b){
  int n1=a.size();
  int n2=b.size();
  string ans(n1+n2,'0');
  for(int i=n1-1;i>=0;i--){
    int nho=0;
    for(int j=n2-1;j>=0;j--){
      int so=(a[i]-'0')*(b[j]-'0')+ans[i+j+1]-'0'+nho;
      nho=so/10;
      ans[i+j+1]=(char)(so%10+'0');
    }
    ans[i]+=nho;
  }
  while(ans[0]=='0'&&ans.size()>1){
    ans.erase(0,1);
  }
  return ans;
}
string power(string a,int m){
  if(m==0) return "1";
  string res=power(a,m/2);
  if(m%2==0){
    return nhanHaiSoLon(res,res);
  }
  else{
    return nhanHaiSoLon(a,nhanHaiSoLon(res,res));
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
  string n;
  int m,k;
  cin>>n>>m>>k;
  string ans=power(n,m);
  for(int i=0;i<k;i++){
    cout<<ans[i];
  }
  cout<<"\n";
  }
  system("pause");
  return 0;
}