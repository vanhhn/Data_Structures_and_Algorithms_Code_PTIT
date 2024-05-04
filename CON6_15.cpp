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
        sort(a,a+n);
        for(int &x:a)cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}