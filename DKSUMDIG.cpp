#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int ans=0;
    for(char c:s){
      ans+=c-'0';
    }
    cout<<ans<<"\n";
  }
  system("pause");
}