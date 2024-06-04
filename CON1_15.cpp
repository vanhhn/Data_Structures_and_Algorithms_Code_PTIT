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
        int x;
        cin>>x;
        string s;
        cin>>s;
        if(next_permutation(s.begin(),s.end())){
          cout<<x<<" "<<s<<"\n";
        }
        else{
          cout<<x<<" BIGGEST\n";
        }
    }
    return 0;
}