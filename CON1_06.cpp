#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok;
void init(){
  scanf("%d",&n);
  ok=1;
  for(int i=1;i<=n;i++){
    a[i]=i;
  }
}
void in(){
  for(int i=1;i<=n;i++){
    printf("%d",a[i]);
  }
  printf(" ");
}
void next(){
  int i=n-1;
  while(i>0&&a[i]>a[i+1]){
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    int j=n;
    while(a[i]>a[j]){
       j--;
    }
    swap(a[i],a[j]);
    reverse(a+i+1,a+n+1);
   
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);
  int t;
  scanf("%d",&t);
  while(t--){
     init();
     while(ok)
     {
      in();
      next();
     }
     printf("\n");
  }
   return 0;
}
