#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define MAX 1000001
int a[MAX];
vector<int>v;
void snt(){
memset(a,1,sizeof(a));
a[0]=a[1]=0;
for(int i=2;i*i<MAX;i++){
   if(a[i]){
      for(int j=i*i;j<MAX;j+=i){
            a[j]=0;
    }
}
}
for(int i=2;i<MAX;i++){
  if(a[i]!=0){
    v.push_back(i);
  }
}
}
int main()
{   snt();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int l=0,r=v.size()-1;
        int ok=1;
        while(l<=r){
          int x=v[l]+v[r];
          if(x==n){
            cout<<v[l]<<" "<<v[r]<<"\n";
            ok=0;
            break;
          }
          else if(x<n){
            l++;
          }
          else{
            r--;
          }
        }
        if(ok==1){
          cout<<"-1\n";
        }
    }
    return 0;
}