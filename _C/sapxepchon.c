#include<stdio.h>
#include<math.h>
int n;
int a[1000];

void result(){
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	for(int i=0;i<n-1;i++){
		int k=i,tmp=a[i];
		for(int j=i+1;j<n;j++){
			if (tmp>a[j]){
				k=j,tmp=a[j];
			}
		}
		if (a[i]>a[k]){
			int temp = a[i];
			a[i]=a[k];
			a[k]=temp;
		}
		printf("Buoc %d: ", i+1);
		result();
		printf("\n");
	}
	return 0;
}