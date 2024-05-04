#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
string s(13,'0');
int ok=1;
vector<string>v;
vector<ll>ans;
void next(){
  int i=s.size()-1;
  while(i>=0&&s[i]=='9'){
    s[i]='0';
    i--;
  }
  if(i<0){
    ok=0;
  }
  else{
    s[i]='9';
  }
}
int main()
  {   next();
     while(ok){
    v.push_back(s);
    next();
   }
   for(int i=1;i<=100;i++){
      for(string s:v){
        ll x=stoll(s);
        if(x%i==0){
          ans.push_back(x);
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
        cout<<ans[n-1]<<"\n";
    }
    return 0;
}