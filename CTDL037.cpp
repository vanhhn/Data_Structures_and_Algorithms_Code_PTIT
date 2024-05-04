#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int a[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        for(int i=9;i>=0;i--){
             cnt+=n/a[i];
             n%=a[i];
        }
        cout<<cnt<<"\n";
    }
    return 0;
}