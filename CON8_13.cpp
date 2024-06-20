#include<bits/stdc++.h>
using namespace std;
vector<int>res;
void preCal(){
    queue<int>q;
    for(int i=1;i<=5;i++){
        q.push(i);
    }
    while(true){
        int x=q.front();
        q.pop();
        res.push_back(x);
        if(x>100000){
            break;
        }
        int check[6]={};
        int tmp=x;
        while(x){
            check[x%10]=1;
            x/=10;
        }
        for(int i=0;i<=5;i++){
            if(!check[i]){
                q.push(tmp*10+i);
            }
        }
    }
}
int main(){
    preCal();
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int cnt=0;
        for(int x:res){
            if(x>=l&&x<=r){
                cnt++;
            }
            if(x>r){
                break;
            }
        }
        cout<<cnt<<"\n";
    }
}