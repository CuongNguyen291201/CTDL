#include<stdio.h>

int main(){
	int a,b; scanf("%d%d", &a, &b);
	if (a<=b){
		for(int i=1;i<=a;i++){
			int k=i, l=b-1;
			for(int j=1;j<=b;j++){
				if (k<=b){
					printf("%d", k);k++;
				} else {
					printf("%d", l);l--;
				}
			}
			printf("\n");
		}
	} else {
		for(int i=1;i<=a;i++){
			int k=i, l=i;
			for(int j=1;j<=b;j++){
				if (k<=b){
					if (k==b && i==b){
						printf("%d", k-j+1);
					} else {
						printf("%d", k);k++;
					}
				} else {
					printf("%d", l);l--;
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}