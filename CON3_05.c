#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
  int *x=(int*)a;
  int *y=(int*)b;
  return *x-*y;
}
int min(int a,int b){
  if(a<b) return a;
  return b;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),cmp);
    int sum1=0,sum2=0;
    k=min(k,n-k);
    for(int i=0;i<n;i++){
      if(i<k){
        sum1+=a[i];
      }
      else{
        sum2+=a[i];
      }
    }
    printf("%d\n",sum2-sum1);
  }
  return 0;
}