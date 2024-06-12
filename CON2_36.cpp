#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[5],b[5];
vector<vector<int>>ans,bns;
void Try(int i){
  for(int j=1;j<=3;j++){
    a[i]=j;
    if(i==4){
       vector<int>tmp(a+1,a+5);
       ans.push_back(tmp);
    }
    else{
      Try(i+1);
    }
  }
}
ll tinhToan(ll a,ll b,int c){
   if(c==1){
    return a+b;
   }
   if(c==2){
    return a-b;
   }
   return a*b;
}
int main(){
  for(int i=0;i<5;i++){
    b[i]=i;
  }
  do{
    vector<int>tmp(b,b+5);
    bns.push_back(tmp);
  }while(next_permutation(b,b+5));
  Try(1);
  int t;
  cin>>t;
  while(t--){
    ll arr[5];
    for(int i=0;i<5;i++)cin>>arr[i];
    int ok=0;
    for(int i=0;i<bns.size();i++){
      ll res=0;
      for(int j=0;j<ans.size();j++){
        res=tinhToan(arr[bns[i][0]],arr[bns[i][1]],ans[j][0]);
        res=tinhToan(res,arr[bns[i][2]],ans[j][1]);
        res=tinhToan(res,arr[bns[i][3]],ans[j][2]);
        res=tinhToan(res,arr[bns[i][4]],ans[j][3]);
        if(res==23){
          ok=1;
          cout<<"YES\n";
          break;
        }
      }
      if(ok==1){
        break;
      }
      
    }
    if(!ok){
      cout<<"NO\n";
    }
  }
  return 0;
}