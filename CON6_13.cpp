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
        int n,x;
        cin>>n>>x;
        int cnt=0;
        int a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==x)cnt++;
        }
        if(cnt==0){
          cout<<"-1\n";
        }
        else{
          cout<<cnt<<"\n";
        }
    }
    return 0;
}