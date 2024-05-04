#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
set<pair<int,int>>se;
int main()
{
    int n;
    cin>>n;
    int x;
    char c;
    for(int i=1;i<=n;i++){
      while(scanf("%d%c",&x,&c)!=EOF){
        if(i>x){
          se.insert({x,i});
        }
        else{
          se.insert({i,x});
        }
        if(c=='\n'){
          break;
        }
      }
    }
    for(auto it:se){
      cout<<it.first<<" "<<it.second<<"\n";
    }
    return 0;
}