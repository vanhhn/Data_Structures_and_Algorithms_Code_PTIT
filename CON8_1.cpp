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
      queue<int>q;
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
              cout<<q.size()<<"\n";
            }
            else if(x==2){
              cout<<(q.empty()?"YES\n":"NO\n");
            }
            else if(x==3){
              int y;
              cin>>y;
              q.push(y);
            }
            else if(x==4){
              if(q.size()){
                q.pop();
              }
            }
            else if(x==5){
              cout<<(!q.empty()?q.front():-1)<<"\n";
            }
            else if(x==6){
              cout<<(!q.empty()?q.back():-1)<<"\n";
            }
      }
        
    }
    return 0;
}