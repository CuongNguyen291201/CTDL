#include<stdio.h>
#include<math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n], b[n], c[n], k=0,m=0;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if (a[i]%2==0) {
			b[k] = a[i]; k++;
		}
		if (a[i]%2!=0) {
			c[m]=a[i]; m++;
		}
	}
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if (b[i]>b[j]){
				int tmp = b[i];
				b[i]=b[j];
				b[j]=tmp;
			}
		}
	}
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if (c[i]>c[j]){
				int tmp = c[i];
				c[i]=c[j];
				c[j]=tmp;
			}
		}
	}
	for(int i=0;i<k;i++) printf("%d ", b[i]);	
	for(int i=0;i<m;i++) printf("%d ", c[i]);
}