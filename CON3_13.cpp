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
        int d;
        cin>>d>>s;
        int ok=0;
        map<char,int>mp;
        for(char c:s)mp[c]++;
        int max_fre=-1;
        for(auto it:mp){
          max_fre=max(max_fre,it.second);
        }
        int n=s.size();
        if(max_fre-(n-max_fre)/(d-1)<=1){
          cout<<"1\n";
        }
        else{
          cout<<"-1\n";
        }
    }
    return 0;
}