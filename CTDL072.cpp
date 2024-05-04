#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
  if(a.second == b.second){
    return a.first < b.first;
  }
  return a.second < b.second;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    pair<int,int> p[n];
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      p[i].first = x;
      p[i].second = abs(x - k);
    }
    sort(p, p + n, cmp);
    for(int i = 0; i < n; i++){
      if(i!=n-1)cout << p[i].first << " ";
      else{
        cout<<p[i].first;
      }
    }
    cout << "\n";
  }
  system("pause");
}