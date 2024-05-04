#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define pb push_back
vvi s,t;
map<vvi,int>used;
void inp(vvi &v){
    for(int i=0;i<2;i++){
        vector<int>tmp;
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            tmp.pb(x);
        }
        v.pb(tmp);
    }
}
vvi trai(vvi a){
    vvi res=a;
    res[0][0]=a[1][0];
    res[0][1]=a[0][0];
    res[1][0]=a[1][1];
    res[1][1]=a[0][1];
    return res;
}
vvi phai(vvi a){
    vvi res=a;
    res[0][1]=a[1][1];
    res[0][2]=a[0][1];
    res[1][1]=a[1][2];
    res[1][2]=a[0][2];
    return res;
}
int check(vvi a,vvi b){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]!=b[i][j]){
                return 0;
            }
        }
    }
    return 1;
}
int sovle(){
    queue<pair<vvi,int>>q;
    q.push({s,0});
    used[s]=1;
    while(!q.empty()){
        auto it=q.front(); q.pop();
        vvi u=it.first;
        int cnt=it.second;
        if(check(u,t)) return cnt;
        vvi t1=trai(u);
        vvi t2=phai(u);
        if(!used[t1]){
            used[t1]=1;
            q.push({t1,cnt+1});
        }
        if(!used[t2]){
            used[t2]=1;
            q.push({t2,cnt+1});
        }
    }
}
int main(){
    inp(s);
    inp(t);
    cout<<sovle();
    return 0;
}