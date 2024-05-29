#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int n,X[100];
void init(){
  scanf("%d",&n);
  for(int i=0;i<100;i++){
    X[i]=0;
  }
}
void in(int n){
  printf("(");
  for(int i=1;i<n;i++){
    printf("%d ",X[i]);
  }
  printf("%d) ",X[n]);
}
void Try(int i,int k,int sum){
  for(int j=k;j>=1;j--){
    if(sum+j<=n){
      X[i]=j;
      sum+=j;
      if(sum==n){
        in(i);
      }
      else{
      Try(i+1,j,sum);
      }
      sum-=j;
    }
  }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      init();
      Try(1,n,0);
      printf("\n");
    }

   return 0;
}
