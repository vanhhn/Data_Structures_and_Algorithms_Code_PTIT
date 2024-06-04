#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
int cmp(const void* a,const void* b){
  int *x=(int*)a;
  int *y=(int*)b;
  return *x-*y;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),cmp);
    ll a1=0,a2=0;
    for(int i=0;i<n;i+=2){
      a1=a1*10+a[i];
    }
    for(int i=1;i<n;i+=2){
      a2=a2*10+a[i];
    }
    printf("%lld\n",a1+a2);
  }
  return 0;
}