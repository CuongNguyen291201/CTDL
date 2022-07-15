#include<stdio.h>
#include<math.h>

int sohoanhoa(int n){
	int sum = 1;
	for(int i=2;i<=sqrt(n);i++) {
		if (n%i==0) {
			if (i==n/i) sum+=i;
			else sum+=i+n/i;
		}
	}
	return sum == n ? 1 : 0;
}

int main() {
	int a, n; scanf("%d%d", &a, &n);
	if (a > n) {
		int tmp = a;
		a = n;
		n = tmp;
	}
	for(int i=(a==1 ? 6 : a);i<=n;i++){
		if (sohoanhoa(i) == 1) printf("%d ", i);
	}
	return 0;
}