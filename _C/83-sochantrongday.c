#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, k=0; scanf("%d", &n);
		int a[n], b[100];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if (a[i]%2==0) {
				b[k]=a[i]; k++;
			}
		}
		for(int i=0;i<k;i++) printf("%d ", b[i]);
		printf("\n");
	}
	return 0;
}