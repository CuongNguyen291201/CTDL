#include<stdio.h>

int main(){
	int t,o=1; scanf("%d", &t);
	while(t--){
		int n,m,k; scanf("%d%d", &n,&m, &k);
		int a[n],b[m];
		for(int i=0;i<n;i++) scanf("%d", &a[i]);
		for(int i=0;i<m;i++) scanf("%d", &b[i]);
		printf("Test %d:\n", o);
		for(int i=0;i<n;i++){
			if (i==k){
				for(int j=0;j<m;j++) printf("%d ", b[j]);
			}
			printf("%d ", a[i]);
		}
		o++;
	}
	return 0;
}