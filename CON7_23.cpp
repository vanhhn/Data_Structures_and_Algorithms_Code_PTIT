#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    stack<string>st;
    int i=s.size()-1;
    while(i>=0){
      if(s[i]==']'||isalpha(s[i])){
        st.push(string(1,s[i]));
        i--;
      }
      else if(s[i]=='['){
         string tmp="";
         while(st.size()&&st.top()!="]"){
          tmp+=st.top();
          st.pop();
         }
         st.pop();
         st.push(tmp);
         i--;
      }
      else{
        int end=i;
        while(isdigit(s[i])){
          i--;
        }
        int number=stoi(s.substr(i+1,end-i));
        string tmp="";
        while(number){
          tmp+=st.top();
          number--;
        }
        st.pop();
        st.push(tmp);
      }
    }
    while(st.size()){
      cout<<st.top();
      st.pop();
    }
    cout<<"\n";
  }
  return 0;
}