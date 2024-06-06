#include<stdio.h>
const int n=8;
int a[10][10],cot[30],xuoi[30],nguoc[30],ans,x[30];
void init(){
  ans=-1e9;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<30;i++){
    x[i]=cot[i]=xuoi[i]=nguoc[i]=0;
  }
}
int max(int a,int b){
  if(a<b) return b;
  return a;
}
void Try(int i){
  for(int j=1;j<=n;j++){
    if(!cot[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
      x[i]=j;
      cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
      if(i==n){
        int sum=0;
        for(int k=1;k<=n;k++){
          sum+=a[k][x[k]];
        }
        ans=max(ans,sum);
      }
      else{
        Try(i+1);
      }
      cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=0;
    }
  }
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    init();
    Try(1);
    printf("%d\n",ans);
  }
  return 0;
}