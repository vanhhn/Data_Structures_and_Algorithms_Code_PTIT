#include<bits/stdc++.h>
using namespace std;
int pre(char c){
  if(c=='(') return 0;
  else if(c=='+'||c=='-') return 1;
  else if(c=='*'||c=='/') return 2;
  return 3;
}
string bienDoiTrungToHauTo(string s){
  string res="";
  stack<char>st;
  for(int i=0;i<s.size();i++){
    if(isalpha(s[i])){
      res+=s[i];
    }
    else if(s[i]==')'){
      while(st.size()&&st.top()!='('){
        res+=st.top();
        st.pop();
      }
      st.pop();
    }
    else if(s[i]=='('){
      st.push(s[i]);
    }
    else{
      while(st.size()&&pre(st.top())>=pre(s[i])){
        res+=st.top();
        st.pop();
      }
      st.push(s[i]);
    }
  }
  while(st.size()){
    res+=st.top();
    st.pop();
  }
  return res;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<bienDoiTrungToHauTo(s)<<"\n";
  }
  return 0;
}