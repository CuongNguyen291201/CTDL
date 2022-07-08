#include<stdio.h>
#include<math.h>

int ucln(long long a, long long b) {
	if (b==0) return a;
	ucln(b, a%b);
}

int main(){
	long long a, b; scanf("%lld%lld", &a, &b);
	
	printf("%lld\n%lld", ucln(a, b), a*b/ucln(a, b));
	
	return 0;
}