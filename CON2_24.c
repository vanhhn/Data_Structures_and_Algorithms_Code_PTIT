#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
  int *x=(int*)a;
  int *y=(int*)b;
  return *x-*y;
}
int n,s,a[100],x[100],ok;
void init(){
  scanf("%d%d",&n,&s);
  for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  qsort(a+1,n,sizeof(a[1]),cmp);
  for(int i=0;i<100;i++){
    x[i]=0;
  }
  ok=0;
}
void Try(int i,int pos,int sum){
  for(int j=pos;j<=n;j++){
    if(sum+a[j]<=s){
      x[i]=j;
      sum+=a[j];
      if(sum==s){
        ok=1;
        printf("[");
        for(int k=1;k<=i-1;k++){
          printf("%d ",a[x[k]]);
        }
        printf("%d] ",a[x[i]]);
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
  scanf("%d",&t);
  while(t--){
    init();
    Try(1,1,0);
    if(ok==0){
      printf("-1");
    }
    printf("\n");
  }
}
