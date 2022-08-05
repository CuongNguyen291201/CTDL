#include<stdio.h>
#include<math.h>

int check(int n){
	if (n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t, k=1; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n], b[100000] = {0};
		for(int i=0;i<n;i++) {
			scanf("%d", &a[i]);
			if (check(a[i])) {
				b[a[i]]++;
			}
		}
		
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++) {
				if (a[i]>a[j]){
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
		
		printf("Test %d:\n", k);
		for(int i=0;i<n;i++){
			if (b[a[i]] > 0){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]]=0;
			}
		}
		k++;
	}
	return 0;
}