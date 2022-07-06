#include<stdio.h>
#include<math.h>

int main() {
	int a, b; scanf("%d%d", &a, &b);
	
	for(int i=1;i<=b;i++){
		for(int j=1;j<=a;j++){
			if (j == 1 || i == 1 || i == b || j == a) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n\n");
	}
	
	return 0;
}