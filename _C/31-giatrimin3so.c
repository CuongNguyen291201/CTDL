#include<stdio.h>

int main() {
	int a,b,c,r; scanf("%d%d%d", &a, &b, &c);
	r = a;
	if (a>b) r = b;
	if (a>c) r = c;
	
	printf("%d", r);
	
	return 0;
}