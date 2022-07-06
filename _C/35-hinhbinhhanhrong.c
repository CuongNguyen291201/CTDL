#include<stdio.h>

int main() {
	int n; scanf("%d", &n);
	
	int m = n-1;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n+m;j++) {
			if (j<m) {
				printf("~");
			} else if(j>m && j<n+m-1 && m>0 && m<n-1 ) {
				printf(".");
			} 
			else {
				printf("*");
			}
		}
		
		printf("\n");
		m--;
	}
	
	
	return 0;
}