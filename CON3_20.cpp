#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int cnt=0,cost=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='['){
        cnt++;
      }
      else{
        cnt--;
      }
      if(cnt<0){
        for(int j=i+1;j<s.size();j++){
          if(s[j]=='['){
            cost+=j-i;
            swap(s[i],s[j]);
            cnt=1;
            break;
          }
        }
      }
    }
    cout<<cost<<'\n';
  }
  return 0;
}