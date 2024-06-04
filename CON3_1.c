#include<stdio.h>
#include<math.h>
int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int s;
    scanf("%d",&s);
    int ans=0;
    for(int i=9;i>=0;i--){
      ans+=s/a[i];
      s%=a[i];
    }
    printf("%d\n",ans);
  }
  return 0;
}