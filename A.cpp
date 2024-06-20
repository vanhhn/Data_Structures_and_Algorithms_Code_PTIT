#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int check(string s){
  int cnt=0;
  for(int i=0;i<s.size()-1;i++){
    if(s[i]=='0'&&s[i+1]=='1')
    {
      cnt++;
    }
  }
  return cnt==2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n<4)cout<<-1;
        else{
          for(int i=0;i<(1<<n);i++){

             string s=bitset<32>(i).to_string();
             s=s.substr(32-n);
             if(check(s))cout<<s<<" ";
          }
        }
        cout<<"\n";
    }
    return 0;
}