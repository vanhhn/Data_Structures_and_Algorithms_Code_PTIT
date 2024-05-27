#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
typedef struct{
    int h;
		int p;
		int s;
}TG;
int cmp(const void* a,const void* b){
	TG *x=(TG*)a;
	TG *y=(TG*)b;
	int x1=x->h*3600+x->p*60+x->s;
  int y1=y->h*3600+y->p*60+y->s;
	return x1-y1;
}
int main()
{
		int n;
		cin>>n;
		TG a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].h>>a[i].p>>a[i].s;
		}
    qsort(a,n,sizeof(a[0]),cmp);
		for(int i=0;i<n;i++){
			cout<<a[i].h<<" "<<a[i].p<<" "<<a[i].s<<"\n";
		}
		return 0;
}