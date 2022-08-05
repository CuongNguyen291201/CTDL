#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int c=i;
		for(int j=1;j<=i;j++){
			printf("%d ", c);
			c = c+n-j;
		}
		printf("\n");
	}
	return 0;
}