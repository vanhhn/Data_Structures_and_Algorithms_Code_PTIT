#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int a[35],n,s,ok,d;
int b[35];
void init(){
  d=0;
  cin>>n>>s;
  ok=1;
  for(int i=1;i<=n;i++){
     cin>>a[i];
     b[i]=0;
  }
}
int check(){
  int sum=0;
  for(int i=1;i<=n;i++){
    if(b[i]==1){
      sum+=a[i];
      d++;
    }
  }
  if(sum==s){
    return 1;
  }
  return 0;
}
void next(){
  int i=n;
  while(i>0&&b[i]==1){
    b[i]=0;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    b[i]=1;
  }
}
int main()
{
   
        init();
        while(ok){
          if(check()) break;
          next();
        }
        if(ok==0){
          cout<<"-1\n";
        }
        else{
          cout<<d<<"\n";
        }
    return 0;
}