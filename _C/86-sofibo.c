#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long a[93] = {1, 1};
		for(int i=2;i<=92;i++) a[i]=a[i-1]+a[i-2];
		int n; scanf("%d", &n);
		printf("%lld\n", a[n-1]);
	}
	return 0;
}