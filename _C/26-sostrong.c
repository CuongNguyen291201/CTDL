#include<stdio.h>
#include<math.h>

int giaithua(int n){
	int result = 1;
	for(int i=1;i<=n;i++){
		result *= i;
	}
	return result;
}

int main() {
	int n,s=0; scanf("%d", &n);
	int r = n;
	
	while(n>0) {
		s += giaithua(n%10);
		n/=10;
	}
	printf("%d", s==r ? 1 : 0);
	
	
	
	return 0;
}