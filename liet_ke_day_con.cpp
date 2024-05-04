#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >ans;
int n,k,a[100],ok,arr[100];
void init(){
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    cin>>arr[i];
  }
  memset(a,0,sizeof(a));
  ok=1;
}
void kq(){
  vector<int>tmp;
  int sum=0;
  for(int i=1;i<=n;i++){
    if(a[i]==1){
      sum+=arr[i];
      tmp.push_back(arr[i]);
    }
  }
  if(sum==k){
    ans.push_back(tmp);
  }
}
void next(){
  int i=n;
  while(i>0&&a[i]==1){
    a[i]=0;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]=1;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
    while(ok){
      kq();
      next();
    }
    if(ans.size()==0)cout<<"-1\n";
    else{
      cout<<ans.size()<<"\n";
      for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
          cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
      }
    }
  }
  system("pause");
}