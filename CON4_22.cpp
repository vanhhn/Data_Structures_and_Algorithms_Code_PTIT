#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int tim(int a[],int n,int x){
  int l=0,r=n-1;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]==x){
      return m+1;
    }
    else if(a[m]<x){
      l=m+1;
    }
    else{
      r=m-1;
    }
  }
  return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int &x:a)cin>>x;
        int ans=tim(a,n,x);
        if(ans==-1){
          cout<<"NO";
        }
        else{
          cout<<ans;
        }
        cout<<"\n";
    }
    return 0;
}