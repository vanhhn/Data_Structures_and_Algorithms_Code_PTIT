#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		int check=0,pos;
		for(int i=s.size()-1;i>=0;--i){
			if(s[i]=='1'){
				check=1;
				pos=i;
				break;
			}
		}
		if(check){
			for(int i=0;i<pos;++i){
				cout<<s[i];
			}
			cout<<"0";
			for(int i=pos+1;i<s.size();++i){
				cout<<"1";
			}
			cout<<el;
		}
		else{
			string tmp="";
			for(int i=0;i<s.size();++i){
				tmp+="1";
			}
			cout<<tmp<<el;
		}
	}
}

