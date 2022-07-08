#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int n) {
	if(n<2) return 0;
	for(int i=2;i<sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int c2(int n){
	int r = 0, a = n;
	while(n>0) {
		r = r*10 + n%10;
		n/=10;
	}
	
	if (a==r) return 1;
	else return 0;
}

int main() {
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		
		for(int i=a; i<=b;i++){
			if (check(i)==1 && c2(i)==1) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}