#include<stdio.h>

int sum(int n){
	int res=0;
	while(n>0){
		res+=n%10;
		n/=10;
	}
	return res;
}

int main(){
	int a,b; scanf("%d%d", &a, &b);
	int a1 = sum(a);
	int b1=sum(b);
	if (a1>b1){
		printf("%d %d", b, a);
	} else {
		printf("%d %d", a, b);
	}
	return 0;
}