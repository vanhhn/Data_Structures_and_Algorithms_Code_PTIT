#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int tim(int a[],int n,int l,int r,int target){
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]==target){
      return 1;
    }
    else if(a[m]>target){
      r=m-1;
    }
    else{
      l=m+1;
    }
  }
  return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,k;
       cin>>n>>k;
       int a[n];
       for(int &x:a)cin>>x;
       sort(a,a+n);
       int ans=0;
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           ans+=tim(a,n,j,n-1,k-a[i]);
        }
       }
       cout<<ans<<"\n"; 
    }
    return 0;
}