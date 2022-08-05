#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int c=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if (i%2==0){
				c++;
				printf("%d ", c-j);
			} else {
				printf("%d ", c);
				c++;
			}
		}	
		printf("\n");
	}
	return 0;
}