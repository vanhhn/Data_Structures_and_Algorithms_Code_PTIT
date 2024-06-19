#include<bits/stdc++.h>
using namespace std;
typedef struct{
   int id,dl,pro;
}cv;
int cmp(const void* a,const void* b){
  cv* x=(cv*)a;
  cv* y=(cv*)b;
  return x->pro-y->pro;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cv a[n];
    for(int i=0;i<n;i++){
      cin>>a[i].id>>a[i].dl>>a[i].pro;
    }
    qsort(a,n,sizeof(a[0]),cmp);
    bool busy[1001]={};
    int cnt=0,res=0;
    for(int i=n-1;i>=0;i--){
      for(int j=a[i].dl;j>=1;j--){
        if(!busy[j]){
          cnt++;
          res+=a[i].pro;
          busy[j]=1;
          break;
        }
      }
    }
    cout<<cnt<<" "<<res<<"\n";
  }
  return 0;
}