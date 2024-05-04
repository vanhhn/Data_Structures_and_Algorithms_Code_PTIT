#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll a[n], b[n-1];
        ll sum1=0, sum2=0;
        for(int i=0;i<n;i++){
           cin>>a[i];
           sum1 += a[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>b[i];
            sum2+= b[i];
        }
        ll r = sum1 - sum2;
        for(int i=0;i<n;i++){
            if(a[i]== r){
                cout<<i+1;
                break;
            }
        }
        cout<<endl;
    }
}