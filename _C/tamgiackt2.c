#include<stdio.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int c=i;
		if (i>1) c+=i-1;
		for(int j=1;j<=n-i+1;j++){
			printf("%c", 'A'+c-1); c+=2;
		}
		printf("\n");
	}
	return 0;
}