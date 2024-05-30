#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int n,k,a[100],ans,b[100],ok;
void init(){
  ok=1;
  scanf("%d%d",&n,&k);
  for(int i=1;i<=k;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<100;i++)b[i]=0;
  ans=0;
}
void next(){
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
int cmp(const void* a,const void* b){
  int *x=(int*)a;
  int *y=(int*)b;
  return *x-*y;
}
int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
      int id=0;
      init();
      for(int i=1;i<=k;i++){
        b[id++]=a[i];
      }
      next();
      if(ok==0){
        printf("%d",k);
      }
      else{
        for(int i=1;i<=k;i++){
           b[id++]=a[i];
        }
        qsort(b,id,sizeof(b[0]),cmp);
        int dem=2*k;
        for(int i=0;i<id-1;i++){
          if(b[i]==b[i+1]){
            dem=dem-1;
          }
        }
        printf("%d",dem-k);
      }
      printf("\n");
    }
   return 0;
}
