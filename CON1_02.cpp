#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int n,k,a[10005],ok;
void init(){
  ok=1;
  cin>>n>>k;
  for(int i=1;i<=k;i++){
    cin>>a[i];
  }

}
void in(){
  for(int i=1;i<=k;i++){
    cout<<a[i]<<" ";
  }
}
void sinh(){
  int i=k;
  while(i>0&&a[i]==n-k+i){
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]+=1;
    for(int j=i+1;j<=k;j++){
      a[j]=a[j-1]+1;
    }
  }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       
       init();
       sinh();
       if(ok==0){
        for(int i=1;i<=k;i++){
          cout<<i<<" ";
        }
       }
       else{
        in();
       }
       cout<<"\n";
    }
    return 0;
}