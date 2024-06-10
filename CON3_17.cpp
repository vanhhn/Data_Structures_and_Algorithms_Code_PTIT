#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin>>k>>s;
        map<char,int>mp;
        for(char c:s){
          mp[c]++;
        }
        priority_queue<int>q;
        for(auto it:mp){
          q.push(it.second);
        }
        while(k--){
          int x=q.top();
          x-=1;
          q.pop();
          q.push(max(x,0));
        }
        ll ans=0;
        while(q.size()){
          int x=q.top();
          ans+=1ll*x*x;
          q.pop();
        }
        cout<<ans<<"\n";
    }
    return 0;
}