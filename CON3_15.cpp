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
        int n,s,m;
        cin>>n>>s>>m;
        int lt=s*m;
        int day=s-s/7;
        if(lt>day*n){
          cout<<"-1\n";
          continue;
        }
        for(int i=1;i<=day;i++){
          if(lt<=n*i){
            cout<<i<<"\n";
            break;
          }
        }
    }
    return 0;
}