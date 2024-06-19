#include<stdio.h>
#define inf 10000
int a[1000];
int id;
void init(){
  id=0;
  int i=1;
  while(i*i<=10000){
    a[id++]=i*i;
    i++;
  }
}
int min(int a,int b){
  if(a<b) return a;
  return b;
}
int main(){
  init();
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int dp[n+1];
    for(int i=1;i<=n;i++){
      dp[i]=inf;
    }
    dp[0]=0;
    for(int i=1;i<=n;i++){
      for(int j=0;j<id;j++){
        if(i>=a[j]&&dp[i-a[j]]!=inf){
          dp[i]=min(dp[i],dp[j-a[i]]+1);
        }
      }
    }
    printf("%d\n",dp[n]);
  }
  return 0;
}