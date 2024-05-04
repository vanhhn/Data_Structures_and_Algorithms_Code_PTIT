#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int cnt[3];
int main()
{
    int t;
    cin >> t;
    while (t--)
    { 
      int n;
      cin>>n;
      memset(cnt,0,sizeof(cnt));
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
      }
      for(int i=0;i<3;i++){
        for(int j=0;j<cnt[i];j++){
          cout<<i<<" ";
        }
      }
      cout<<"\n";    
    }
    return 0;
}