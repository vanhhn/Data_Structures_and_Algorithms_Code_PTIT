#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
char Xor(char x,char y){
  if(x==y)return '0';
  return '1';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        string ans=string(s.size(),'0');
        ans[0]=s[0];
        for(int i=1;i<s.size();i++){
             ans[i]=Xor(ans[i-1],s[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}