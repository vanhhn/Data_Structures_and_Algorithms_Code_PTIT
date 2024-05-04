#include<bits/stdc++.h>
using namespace std;
void out(int a[], int n){
    cout<<"[";
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<"]"<<endl;
}
void kq(int a[], int n){
    while(n>0){
        out(a,n);
        for(int i=0;i<n-1;i++){
            a[i]= a[i]+ a[i+1];
        }
        n--;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        kq(a,n);
    }
    return 0;
}