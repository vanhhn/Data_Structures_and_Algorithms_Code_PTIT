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
        ll n;
        cin>>n;
        ll ans=0;
        queue<string>q;
        q.push("1");
        while(true){
          string x=q.front();
          q.pop();
          q.push(x+"0");
          q.push(x+"1");
          if(stoll(x)>n){
            break;
          }
          ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}