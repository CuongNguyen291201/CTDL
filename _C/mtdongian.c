#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i=0;i<n;i++){
		int c=1;
		for(int j=0;j<n;j++){
			if (j>i) {
				printf("%d ", c); c++;
			}
			else printf("%d ", 0);
		}
		printf("\n");
	}
	return 0;
}