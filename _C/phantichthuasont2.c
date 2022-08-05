#include<stdio.h>
#include<math.h>

int main(){
	int n,dem; scanf("%d", &n);
	for(int i=2;i<=n;i++){
		dem=0;
		while(n%i==0){
			dem++;
			n/=i;
		}
			printf("N %d ", i);
		if (n>1) {
			printf("%d", i);
			break;
		}
		if (dem) {
////			if (dem>1) printf("%d ", dem);
//			printf("N: %d\n", n);
			for(int j=0;j<dem;j++){
				printf("%dx", i);
			}
		}
	}
	return 0;
}