#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<string> grayCode(int n){
  if(n==0){
    return {"0"};
  }
  if(n==1){
    return {"0","1"};
  }
  vector<string>tmp=grayCode(n-1);
  vector<string>res;
  for(string x:tmp){
    res.push_back("0"+x);
  }
  for(int i=tmp.size()-1;i>=0;i--){
    res.push_back("1"+tmp[i]);
  }
  return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<string>ans=grayCode(n);
        for(string s:ans)cout<<s<<" ";
        cout<<"\n";
    }
    return 0;
}