#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int mod1(string a,int n){
  int ans=0;
  for(char c:a){
    ans=ans*10+c-'0';
    ans%=n;
  }
  return ans==0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      queue<string>q;
      q.push("1");
      while(true){
        string x=q.front();
        q.pop();
        q.push(x+"0");
        q.push(x+"1");
        if(x.size()>20){
          break;
        }
        if(mod1(x,n)){
          cout<<x<<"\n";
          break;
        }
      }
    }
    return 0;
}