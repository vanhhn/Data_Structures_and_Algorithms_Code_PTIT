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
        int a[n];
        for(int &x:a)cin>>x;
        ll sum1=0,sum2=0;
        sort(a,a+n);
        for(int i=0;i<n;i+=2){
          sum1=sum1*10+a[i];
        }
        for(int i=1;i<n;i+=2){
          sum2=sum2*10+a[i];
        }
        cout<<sum1+sum2<<"\n";
    }
    return 0;
}