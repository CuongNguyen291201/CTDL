#include<stdio.h>
#include<math.h>

int check(int n){
	if (n<2) return 0;
	for(int i=2;i<=sqrt(n);i++) {
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, k=0; scanf("%d", &n);
		int a[n], b[100];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if (check(a[i])) {
				b[k]=a[i]; k++;
			}
		}
		for(int i=0;i<k;i++) printf("%d ", b[i]);
		printf("\n");
	}
	return 0;
}