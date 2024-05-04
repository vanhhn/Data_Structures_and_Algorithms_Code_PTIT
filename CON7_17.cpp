#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void sovle(string s){
  stack<int>st;
  for(int i=s.size()-1;i>=0;i--){
    if(isdigit(s[i])){
      st.push(s[i]-'0');
    }
    else{
      int o1=st.top();st.pop();
      int o2=st.top();st.pop();
      int res;
      if(s[i]=='+') res=o1+o2;
      else if(s[i]=='-')res=o1-o2;
      else if(s[i]=='/') res=o1/o2;
      else res=o1*o2;
      st.push(res);
    }
  }
  cout<<st.top()<<"\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        sovle(s);
    }
    return 0;
}