#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<pair<int,int>>q;
        q.push({n,0});
        unordered_map<int,int>mp;
        mp[n]=1;
        while(q.size()){
            auto it=q.front();
            q.pop();
            if(it.first==1){
                cout<<it.second<<endl;
                break;
            }
            for(int i=2;i*i<=it.first;i++){
                if(it.first%i==0){
                    int m=max(i,it.first/i);
                    if(!mp[m]){
                        q.push({m,it.second+1});
                        mp[m]=1;
                    }
                }
            }
            if(!mp[it.first-1]){
                q.push({it.first-1,it.second+1});
                mp[it.first-1]=1;
            }
        }
    }
}