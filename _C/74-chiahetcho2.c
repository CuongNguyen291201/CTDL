#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,i=1,count=0; scanf("%d", &n);
		while(i<=n/i){
			if (n%i==0) {
				if (i%2==0) count++;
				if (n/i%2==0) count++;
				if (n/i==i && i%2==0) count--;
			}
			
			i++;
		}
		printf("%d\n", count);
	}
	
	return 0;
}