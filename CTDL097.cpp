#include<bits/stdc++.h>
using namespace std;
void sovle(string s){
	stack<string>st;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])){
			st.push(string(1,s[i]));
		}
		else{
			string o1=st.top();st.pop();
			string o2=st.top();st.pop();
			string ans=s[i]+o2+o1;
			st.push(ans);
		}
	}
	cout<<st.top()<<"\n";
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		sovle(s);
	}
}