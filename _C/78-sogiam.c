#include<stdio.h>
#include<math.h>

int check(int n){
	while(n>0){
		if (n%10 >= (n/10%10)) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long a,b,count=0; scanf("%lld%lld", &a, &b);
		a < 10 ? a = 10 : a;
		for(int i=a;i<=b;i++) {
			if (check(i)==1) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}