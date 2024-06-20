#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
void init(){
    for(int i=100;i>=1;i--){
        v.push_back(i*i*i);
    }
}
string cal(string &s){
    string tmp;
    for(ll &i:v){
        tmp=to_string(i);
        int id=0;
        for(char j:s){
            if(j==tmp[id]){
                id++;
            }
        }
        if(id==tmp.size()){
            return tmp;
        }
    }
    return "-1";
}
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<cal(s)<<"\n";
    }
    return 0;
}