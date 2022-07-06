#include<stdio.h>
#include<math.h>

int main() {
	int a,b,r=0; scanf("%d%d", &a, &b);
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	
	for(int i=a;i<=b;i++){
		r += i;
	}
	printf("%d", r);

	return 0;
}