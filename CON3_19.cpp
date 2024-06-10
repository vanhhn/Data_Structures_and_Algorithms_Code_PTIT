#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    ll tu,mau;
    cin>>tu>>mau;
    ll res=0;
    while(true){
      if(mau%tu==0){
        cout<<1<<"/"<<mau/tu;
        break;
      }
      else{
        res=mau/tu+1;
        cout<<1<<"/"<<res<<" + ";
        tu=res*tu-mau;
        mau=res*mau;
      }
    }
    cout<<"\n";
  }
  return 0;
}