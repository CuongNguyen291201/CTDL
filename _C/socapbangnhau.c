#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n], count=0;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if (i>0 && a[i] == a[i-1]) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}