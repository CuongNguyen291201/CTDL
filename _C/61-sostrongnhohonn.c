#include<stdio.h>
#include<math.h>

int cal2(int n){
	int sum = 1;
	for(int i=2;i<=n;i++){
		sum *= i;
	}
	return sum;
}

int cal(int n){
	int r = 0;
	while(n>0) {
		int a = n%10;
		r += cal2(a);
		n/=10;
	}
	return r;
}

int main(){
	int a, n; scanf("%d%d", &a, &n);
	if (a > n) {
		int tmp = a;
		a = n;
		n = tmp;
	}
	for(int i=a;i<=n;i++){
		if (i == cal(i)) printf("%d ", i);
	}
	
	return 0;
}