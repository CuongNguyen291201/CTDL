#include<stdio.h>
#include<math.h>

int main() {
//	int t; scanf("%d", &t);
//	while(t--) {
//		
//		int n, r=0; scanf("%d", &n);
//	
//		while(n>0) {
//			r += n%10;
//			n/=10;
//		}
//	
//		printf("%d\n", r);
//	}
	int n, r=1; scanf("%d", &n);
	
		while(n>0) {
			r *= n%10;
			n/=10;
		}
	
		printf("%d", r);

	return 0;
}