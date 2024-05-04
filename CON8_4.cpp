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
        string s;
        int k;
        cin>>k>>s;
        ll ans=0;
        map<char,int>mp;
        for(char c:s)mp[c]++;
        vector<int>v;
        for(auto it:mp){
          v.push_back(it.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        while(k--){
          v[0]-=1;
          sort(v.begin(),v.end(),greater<int>());
        }
        for(int x:v){
          ans+=1ll*x*x;
        }
        cout<<ans<<"\n";
    }
    return 0;
}