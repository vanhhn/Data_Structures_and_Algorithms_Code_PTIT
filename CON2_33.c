#include<stdio.h>
int n,ans,cot[100],nguoc[100],xuoi[100],x[100];
void init(){
  scanf("%d",&n);
  ans=0;
  for(int i=0;i<100;i++){
    cot[i]=nguoc[i]=xuoi[i]=x[i]=0;
  }
}
void Try(int i){
  for(int j=1;j<=n;j++){
    if(!cot[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
      cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
      x[i]=j;
      if(i==n){
        ans++;
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