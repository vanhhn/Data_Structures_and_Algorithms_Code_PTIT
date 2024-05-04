#include<bits/stdc++.h>
using namespace std;

int main(){
       int t; cin>>t;
       while(t--){
              int n; cin>>n;
              int x;
              stack<int>st;
              for(int i=0;i<n;i++){
                     cin>>x;
                     st.push(x);
              }
              while(!st.empty()){
                     cout<<st.top()<<" ";
                     st.pop();
              }
              cout<<endl;
       }
       return 0;
}