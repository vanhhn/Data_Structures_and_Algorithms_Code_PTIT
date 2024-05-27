#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
   char c[1001];
int main(){

   int t;
   scanf("%d",&t);
   while(t--){
    getchar();
 
    scanf("%s",&c);
    int i=strlen(c)-1;
    while(i>=0&&c[i]=='1'){
      c[i]='0';
      i--;
    }
    if(i>=0){
      c[i]='1';
    }
    printf("%s\n",c);
   }
   return 0;
}
