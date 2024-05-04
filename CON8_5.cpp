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
        int n;
        cin>>n;
        queue<string>q;
        q.push("1");
        int cnt=0;
        while(true){
          string x=q.front();
          q.pop();
          q.push(x+"0");
          q.push(x+"1");
          cout<<x<<" ";
          cnt++;
          if(cnt==n){
            break;
          }
        }
        cout<<"\n";
    }
    return 0;
}