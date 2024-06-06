#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,s,a[100],x[100];
vector<string>ans;
void init(){
   cin>>n>>s;
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   sort(a+1,a+n+1);
   memset(x,0,sizeof(x));
   ans.clear();
}
void Try(int i,int pos,int sum){
  for(int j=pos;j<=n;j++){
     if(sum+a[j]<=s){
      x[i]=j;
      sum+=a[j];
      if(sum==s){
        string tmp="[";
        for(int k=1;k<=i-1;k++){
          tmp+=to_string(a[x[k]])+" ";
        }
        tmp+=to_string(a[x[i]])+"]";
        ans.push_back(tmp);
      }
      else{
        Try(i+1,j+1,sum);
      }
      sum-=a[j];
     }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
    Try(1,1,0);
    if(ans.size()==0){
      cout<<"-1\n";
    }
    else{
      for(string x:ans){
        cout<<x<<" ";
      }
      cout<<"\n";
    }
  }
  return 0;
}