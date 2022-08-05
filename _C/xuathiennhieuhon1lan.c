#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n], c[n], j=0,count=0,b[10000]={0};
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if (b[a[i]] == 1) {
			count++;
			c[j]=a[i]; j++;
		}
	}	
	return 0;
}