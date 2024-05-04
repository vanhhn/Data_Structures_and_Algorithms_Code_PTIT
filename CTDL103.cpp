#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int main()
{ 
  int n;
  cin>>n;
  int x;
  char c;
  for(int i=1;i<=n;i++){
  	while(scanf("%d%c",&x,&c)!=EOF){
  		a[i][x]=1;
  		if(c=='\n'){
  			break;
		  }
	  }
  }
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=n;j++){
  		cout<<a[i][j]<<" ";
	  }
	  cout<<"\n";
  }
 return 0;
}