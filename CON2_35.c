#include<stdio.h>
int n,k,s,ans,x[100];
void init(){
  ans=0;
  x[0]=0;
}
void Try(int i){
  for(int j=1+x[i-1];j<=n-k+i;j++){
    x[i]=j;
    if(i==k){
      int sum=0;
      for(int m=1;m<=k;m++){
        sum+=x[m];
      }
      if(sum==s){
        ans++;
      }
    }
    else{
      Try(i+1);
    }
  }
}
int main(){
  while(scanf("%d%d%d",&n,&k,&s)&&n+k+s!=0){
    init();
    Try(1);
    printf("%d\n",ans);
  }
  return 0;
}
