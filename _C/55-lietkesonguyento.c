#include<stdio.h>
#include<string.h>

int check(int n){
	if (n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){ 
		if(n%i==0) return 0;  
	}
	return 1;
}

int main(){
	int n, count=1, a=1; scanf("%d", &n);
	
	for(int i=2;count<=n;i++){
		if (check(i)==1) {
			printf("%d\n", i);
			count++;
		}
	}
	
	return 0;
}