#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    map<char,int>mp;
    for(char c:s)mp[c]++;
    int maxfre=-1;
   
    for(auto it:mp){
        maxfre=max(maxfre,it.second);
    }
     int remain=s.size()-maxfre;
    if(maxfre<=remain+1){
      cout<<"1\n";
    }
    else{
      cout<<"-1\n";
    }
     
  }
  return 0;
}