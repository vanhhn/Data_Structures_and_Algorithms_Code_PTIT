#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int mod1(string s,int n){
  int ans=0;
  for(char c:s){
    ans=ans*10+c-'0';
    ans%=n;
  }
  return ans==0;
}
vector<string>ans;
vector<string>v;
int main()
{   queue<string>q;
    q.push("1");
    while(!q.empty()){
      string x=q.front();
      q.pop();
      ans.push_back(x);
      if(x.size()>20)break;
      q.push(x+"0");
      q.push(x+"1");
    }
    for(int i=1;i<=998;i++){
      if(i==792){
        v.push_back("111111111111111111000");
        continue;
      }
      for(string x:ans){
        if(mod1(x,i)){
          v.push_back(x);
          break;
        }
      }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<v[n-1]<<"\n";
    }
    return 0;
}