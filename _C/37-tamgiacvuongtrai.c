#include<stdio.h>

int main() {
	int n; scanf("%d", &n);
	
//	vuong trai
	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}

//	vuong trai rong
	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<=i;j++){
//			if (i==n-1 || j==0 || i==j) printf("*");
//			else printf(".");	
//		}
//		printf("\n");
//	}

//	vuong phai
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++){
			if (j<n-i-1) printf("~");
			else printf("*");
		}
		printf("\n");
	}
	
	return 0;
}