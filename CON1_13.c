#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
typedef struct {
  char s[100];
}W;
W ans[32678];
int n,k,a[100],ok,id;
void init(){
  scanf("%d%d",&n,&k);
  ok=1;
  for(int i=1;i<=n;i++){
    a[i]=0;
  }
  id=0;
}
void in(){
  char tmp[100];
  for(int i=1;i<=n;i++){
    if(a[i]==0){
      //printf("A");
      tmp[i-1]='A';
    }
    else{
      //printf("B");
      tmp[i-1]='B';
    }
    tmp[n]='\0';
  }
  strcpy(ans[id++].s,tmp);
}
int check(){
  int d=0,ans=0;
  for(int i=1;i<=n;i++){
    if(a[i]==0){
      d++;
      if(d>k){
        return 0;
      }
      if(d==k){
        ans++;
      }
   }
    else{
      d=0;
    }
  }
  return ans==1;
}
void next(){
  int i=n;
  while(i>0&&a[i]==1){
    a[i]=0;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]=1;
  }
}
int main(){

    init();
    while(ok){
      if(check()){
        in();
      }
      next();
    }
    printf("%d\n",id);
    for(int i=0;i<id;i++){
      printf("%s\n",ans[i].s);
    }
   return 0;
}
