#include<stdio.h>
#include<math.h>

int main() {
	int t, sum=0; scanf("%d", &t);
	while(t--){
		int n, res=1, sum=0, dem; scanf("%d", &n);
		for(int i=2;i<=n;i++){
			dem=0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			if (dem) {
				res *= i;
				sum = sum + pow(i, dem);
//				printf("%d ", i);
//				if (dem>1) printf("%d ", dem);
			}
		}
	}
		printf("%d\n", sum);
	return 0;
	
	
}