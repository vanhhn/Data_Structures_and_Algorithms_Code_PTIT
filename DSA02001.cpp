#include<bits/stdc++.h>
using namespace std;


void dequy(vector<int> v){
	vector<int> a;
	cout<<"[";
	for(int i=0;i<v.size();i++){
		cout<<v[i];
		if(i<v.size()-1) cout<<" ";
	}
	cout<<"]"<<endl;
	
	for(int i=0;i<v.size()-1;i++){
		a.push_back(v[i]+v[i+1]);
	}
	if(a.size()==1){
		cout<<"[";
		cout<<a[0];
		cout<<"]"<<endl;
	}
	else dequy(a);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		vector<int> v;
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		if(v.size()>1) dequy(v);
		else {
		cout<<"[";
		cout<<v[0];
		cout<<"]"<<endl;
		}
	}
}