#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int l=s.size();
    vector<int>v(l+1,1);
    for(int i=0;i<l;i++){
      for(int j=0;j<i;j++){
        if(tolower(s[i])>tolower(s[j])){
          v[i]=max(v[i],1+v[j]);
        }
      }
    }
    cout<<*max_element(v.begin(),v.end())<<"\n";
  }
  system("pause");
}