#include<bits/stdc++.h>

using namespace std;
vector<int> v[1005];
int mt[1005][1005];
int main(){
    
        int n;
        cin >>n;
        
        for(int i=1;i<= n; i++){
            for(int j=1;j<=n;j++){
                cin>>mt[i][j];
                if(mt[i][j] == 1) v[i].push_back(j);
            }
        }
        for(int i=1; i<=n;i++){
            cout<<i<<": ";
            for(int x: v[i]) cout<<x<<" ";
            cout<<endl;
        }
        for(int i = 1;i <= n; i++) v[i].clear();
    return 0;
}