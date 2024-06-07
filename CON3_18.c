#include<stdio.h>
#define ll long long
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  int n;
  scanf("%d",&n);
  int ok=0;
  int so4=0,so7=0;
  for(int i=n/7;i>=0;i--){
    if((n-i*7)%4==0){
      so7=i;
      so4=(n-7*so7)/4;
      ok=1;
      break;
    }
  }
  if(ok==0){
    printf("-1\n");
  }
  else{
    for(int i=1;i<=so4;i++){
      printf("4");
    }
    for(int i=1;i<=so7;i++){
      printf("7");
    }
    printf("\n");
  }
  }
  return 0;
}