#include<stdio.h>
#include<math.h>

int main(){
	int m,n; scanf("%d%d", &m, &n);
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int k1,k2;
	scanf("%d%d", &k1, &k2);
	for(int j=0;j<m;j++){
		int tmp=a[k1-1][j];
		a[k1-1][j]=a[k2-1][j];
		a[k2-1][j]=tmp;
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}