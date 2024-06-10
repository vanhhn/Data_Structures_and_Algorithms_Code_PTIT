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
        int s,m;
        cin>>s>>m;
        if(s>9*m){
          cout<<"-1\n";
        }
        else{
          int res[m];
          s-=1;
          for(int i=m-1;i>=1;i--){
              if(s>=9){
                res[i]=9;
                s-=9;
              }
              else{
                res[i]=s;
                s=0;
              }
          }
          res[0]=s+1;
          for(int x:res){
            cout<<x;
          }
          cout<<"\n";
        }

    }
    return 0;
}