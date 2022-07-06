#include<stdio.h>
#include<math.h>

int main() {
	int t; scanf("%d", &t);
	while(t--){
		int n, dem; scanf("%d", &n);
		for(int i=2;i<=n;i++){
			dem=0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			if (dem) {
				printf("%d ", i);
				if (dem>1) printf("%d ", dem); 
			}
		}
		printf("\n");
	}
	return 0;
	
	
}