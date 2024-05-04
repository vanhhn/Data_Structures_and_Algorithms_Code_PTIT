#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool cnt[10];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        memset(cnt,false,sizeof(cnt));
        for(int i=0;i<n;i++){
          string s;
          cin>>s;
          for(char c:s){
            cnt[c-'0']=true;
          }
        }
        for(int i=0;i<10;i++){
          if(cnt[i]){
            cout<<i<<" ";
          }
        }
        cout<<"\n";
    }
    return 0;
}