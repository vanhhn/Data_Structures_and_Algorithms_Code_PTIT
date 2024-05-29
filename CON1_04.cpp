#include<stdio.h>
#include<string.h>
int a[100],n,ok;
void init(){
  scanf("%d",&n);
  ok=1;
  for(int i=0;i<100;i++){
    a[i]=0;
  }
}
void in(){
  for(int i=1;i<=n;i++){
    if(a[i]==0){
      printf("A");
    }
    else{
      printf("B");
    }
  }
  printf(" ");
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
  scanf("%d",&t);
  while(t--){
    init();
    while(ok){
      in();
      next();
    }
    printf("\n");
  }
  return 0;
}