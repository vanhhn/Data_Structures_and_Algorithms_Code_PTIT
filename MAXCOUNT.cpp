#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  map<int,int>mp;
  for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
  }
  int fre=-1;
  for(auto it:mp){
     if(fre<it.second){
      fre=it.second;
     }
  }
  for(int i=0;i<n;i++){
    if(mp[a[i]]==fre){
      cout<<a[i]<<" "<<fre<<"\n";
      break;
    }
  }
  system("pause");
}