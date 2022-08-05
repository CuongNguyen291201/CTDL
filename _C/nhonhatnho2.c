#include<stdio.h>

int main(){
	int n,m1=1000,m2=0; scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if (a[i]>a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	printf("%d %d", a[0], a[1]);

	
	return 0;
}