#include<stdio.h>
#include<math.h>

int n,k=0;
int a[1000], b[1000];

void sort(){
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if (b[i]>b[j]){
				int tmp = b[i];
				b[i]=b[j];
				b[j]=tmp;
			}
		}
	}
}


int main(){
	scanf("%d", &n);

	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	for(int i=0;i<n;i++){
		printf("Buoc %d: ", i+1);
		b[k]=a[i];k++;
//		for(int j=0;j<k-1;j++){
//			for(int t=j+1;j<k;j++){
//				int tmp=b[j];
//				b[j]=b[t];
//				b[t]=tmp;
//			}
//		}
		sort();
		for(int j=0;j<k;j++) printf("%d ", b[j]);
		printf("\n");
	}
	
	return 0;
}