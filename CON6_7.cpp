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
        int a[n+1];
        for(int i=1;i<=n;i++){
          cin>>a[i];
        }
        stack<int>st;
        int i=1;
        int l,r;
        while(true){
           if(st.empty()){
            st.push(a[i]);
            i++;
           }
          else if(a[i]<st.top()){
            l=i-1;
            break;
          }
        }
         
    }
    return 0;
}