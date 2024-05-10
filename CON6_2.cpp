#include<stdio.h>
#include<math.h>

void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void Bubble_Sort(int a[], int n, int k) {
    for(int i = 0 ; i < n - 1 ; i ++) {
        for(int j = 0 ; j < n - i - 1; j ++) {
            if (abs(a[j] - k) > abs(a[j + 1] - k))
                swap(&a[j], &a[j + 1]);
        }
    }
}

int main() {
	
	int t;
    scanf("%d",&t);
    while(t--) { 
        int n, k; 
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        Bubble_Sort(a, n, k);
        for(int i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}