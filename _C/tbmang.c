#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n]; float res=0;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		res += a[i];
	}
	printf("%.3f", res/n);
	return 0;
}