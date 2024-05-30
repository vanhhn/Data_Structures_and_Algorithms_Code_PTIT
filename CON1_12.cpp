#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int n,k,a[100],ok;
void init(){
  scanf("%d%d",&n,&k);
  for(int i=0;i<100;i++){
    a[i]=0;
  }
  ok=1;
}
int check(){
     int d=0;
     for(int i=1;i<=n;i++){
      if(a[i]==1){
        d++;
      }
     }
     return d==k;
}
void in(){
  for(int i=1;i<=n;i++){
    printf("%d",a[i]);
  }
  printf("\n");
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
        if(check()){
          in();
        }
        next();
      }
    }

   return 0;
}
