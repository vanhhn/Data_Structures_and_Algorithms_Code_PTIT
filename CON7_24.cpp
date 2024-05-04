#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
map<int,int>mp;  
void solve(string s){
  stringstream ss(s);

  string w;
  while(ss>>w){
    if(w!="+"){
      int hs=0,sm=0,i=0;
      while(i<w.size()&&isdigit(w[i])){
        hs=hs*10+w[i]-'0';
        i++;
      }
      i+=3;
      while(i<w.size()&&isdigit(w[i])){
        sm=sm*10+w[i]-'0';
        i++;
      }
      mp[sm]+=hs;
    }
  }
 
}
void chuanHoa(string &s){
  for(int i=0;i<s.size();i++){
    if(s[i]=='+'){
      s[i]=' ';
    }
  }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {    mp.clear();
        string s1,s2;
        getline(cin,s1);
        chuanHoa(s1);
        getline(cin,s2);
        chuanHoa(s2);
        solve(s1);
        solve(s2);
         int dem=0;
  for(map<int,int>::reverse_iterator it=mp.rbegin();it!= mp.rend();it++){
        ++dem;
        cout<<(*it).second<<"*x^"<<(*it).first;
        if(dem!=mp.size()){
          cout<<" + ";
        }
  }
  cout<<"\n";
        
    }
    return 0;
}