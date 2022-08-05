#include<stdio.h>

int main(){
	int n, count=0; scanf("%d", &n);
	int a[n];  int b[100000]={0}, c[100000]={0};
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		b[a[i]]++;
		c[a[i]]++;
	}
	for(int i=0;i<n;i++) {
		if (c[a[i]] > 1) {
			count++;
			c[a[i]]=0;
		}
	}
	printf("%d\n", count);
	for(int i=0;i<n;i++){
		if (b[a[i]] > 1){
			printf("%d ", a[i]);
			b[a[i]]=0;
		}
	}
	return 0;
}