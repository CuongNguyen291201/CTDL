#include<stdio.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int c=0;
		for(int j=1;j<=n-i+1;j++){
			printf("%c", '@'+n-i+c); c++;
		}
		printf("\n");
	}
	return 0;
}