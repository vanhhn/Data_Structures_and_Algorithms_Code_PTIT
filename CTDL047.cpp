#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int so4=0,so7=0;
    for(int i=n/7;i>=0;i--){
      if((n-i*7)%4==0){
        so4=(n-i*7)/4;
        so7=(n-so4*4)/7;
        break;
      }
    }
    if(so4==0&&so7==0){
      cout<<-1<<"\n";
    }
    else{
      for(int i=1;i<=so4;i++){
        cout<<4;
      }
      for(int j=1;j<=so7;j++){
        cout<<7;
      }
      cout<<"\n";
    }
  }
  system("pause");
}