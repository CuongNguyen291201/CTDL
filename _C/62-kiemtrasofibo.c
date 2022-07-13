#include<stdio.h>
#include<math.h>

int fibo(int n){
	int f1=0,f2=1;
	if (n==1) return 0;
	else if (n==2) return 1;
	else return fibo(n-1)+fibo(n-2);
}

int check(int n){
	int c = 0;
	for(int i=1;fibo(i)<=n;i++){
		if (fibo(i)==n) {
			c=1; break;
		} 
	}
	return c==1 ? 1 : 0;
}

int main(){
	int n; scanf("%d", &n);
	printf("%d", check(n));
	return 0;
}