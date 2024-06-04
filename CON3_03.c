#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
#define mod 1000000007
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
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    ll ans=0;
    qsort(a,n,sizeof(a[0]),cmp);
    for(int i=0;i<n;i++){
      ans+=1ll*i*a[i];
      ans%=mod;
    }
    printf("%lld\n",ans);
  }
}