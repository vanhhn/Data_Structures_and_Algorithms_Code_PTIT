#include<bits/stdc++.h>
using namespace std;
int checkPrime(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      return 0;
    }
  }
  return n>1;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int l,r,ok=0;
    cin>>l>>r;
    queue<pair<int,int>>q;
    q.push({l,0});
    unordered_map<int,int>mp;
    mp[l]=1;
    while(q.size()){
      auto it=q.front();
      q.pop();
      if(it.first==r){
        cout<<it.second<<endl;
        ok=1;
        break;
      }
      vector<int>digit;
      int tmp=it.first;
      while(tmp){
        digit.push_back(tmp%10);
        tmp/=10;
      }
      reverse(digit.begin(),digit.end());
      for(int i=0;i<4;i++){
        for(int j=0;j<10;j++){
          if(i==0&&j==0){
            continue;
          }
          if(digit[i]!=j){
            int new_num=0;
            for(int k=0;k<4;k++){
              if(i!=k){
                new_num=new_num*10+digit[k];
              }
              else{
                new_num=new_num*10+j;
              }
            }
            if(checkPrime(new_num)&&!mp[new_num]){
              q.push({new_num,it.second+1});
              mp[new_num]=1;
            }
          }
        }
      }
      
    }
    if(!ok)cout<<"-1\n";
  }
}