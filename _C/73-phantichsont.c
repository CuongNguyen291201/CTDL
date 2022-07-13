#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,dem; scanf("%d", &n);
		printf("%d = ", n);
		
		for(int i=2;i<=n;i++){
			dem=0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			if (dem){
				printf("%d^%d ", i, dem);
			}
			if (dem && n>1) printf(" * ");
		}
		
		
		printf("\n");
	}
	return 0;
}