#include<stdio.h>
#include<string.h>
#define ll long long
ll bienDoiNho(char c[]){
  ll ans=0;
  for(int i=0;i<strlen(c);i++){
    if(c[i]=='6'){
      ans=ans*10+5;
    }
    else{
      ans=ans*10+(c[i]-'0');
    }
  }
  return ans;
}
ll bienDoiLon(char c[]){
  ll ans=0;
  for(int i=0;i<strlen(c);i++){
    if(c[i]=='5'){
      ans=ans*10+6;
    }
    else{
      ans=ans*10+(c[i]-'0');
    }
  }
  return ans;
}
int main(){
  char s1[20],s2[20];
  scanf("%s %s",&s1,&s2);
  ll a=bienDoiLon(s1);
  ll b=bienDoiLon(s2);
  ll c=bienDoiNho(s1);
  ll d=bienDoiNho(s2);
  printf("%lld %lld",c+d,a+b);
  return 0;
}