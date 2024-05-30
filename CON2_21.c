#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

int n,X[100],check[100];
char c[100];
void init(){
  fgets(c,100,stdin);
  c[strlen(c)-1]='\0';
  n=strlen(c);
  for(int i=0;i<100;i++)check[i]=0;
}

void Try(int i){
  for(int j=1;j<=n;j++){
    if(!check[j]){
      check[j]=1;
      X[i]=j;
      if(i==n){
        for(int k=1;k<=n;k++){
          printf("%c",c[X[k]-1]);
        }
        printf(" ");
      }
      else{
        Try(i+1);
      }
      check[j]=0;
    }
  }
}

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    scanf("\n");
    init();
    Try(1);
    printf("\n");
  }

  return 0;
}