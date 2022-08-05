#include<stdio.h>
#include<math.h>

int check(int n){
	if (n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n, count=0; scanf("%d", &n);
	int a[n], b[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if (check(a[i])) {
			b[count]=a[i];
			count++;
		}
	}
	printf("%d ", count);
	for(int i=0;i<count;i++) printf("%d ", b[i]);
	return 0;	
}