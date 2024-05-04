#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<string>v;
vector<ll>ans;
queue<string>q;
void preCal(){
  q.push("9");
  while(true){
    string s=q.front();
    q.pop();
    q.push(s+"0");
    q.push(s+"9");
    if(s.size()>13){
      break;
    }
    v.push_back(s);
  }
  for(int i=1;i<=100;i++){
    for(string x:v){
      ll a=stoll(x);
      if(a%i==0){
        ans.push_back(a);
        break;
      }
    }
  }
}
int main()
{   
    preCal();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<ans[n-1]<<"\n";
    }
    return 0;
}