#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int c=2, l=1;
		for(int j=1;j<=i;j++){
			if (i%2!=0) {
				printf("%d", l);
				l+=2;
			} else {
				printf("%d", c);
				c+=2;
			}
		}
		printf("\n");
	}
	return 0;
}