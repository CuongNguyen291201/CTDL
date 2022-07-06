#include<stdio.h>
#include<math.h>

int main() {
	int m, n, count=0, a[10000]; scanf("%d%d", &m, &n);
	
	for(int i=m;i<=n;i++){
		int k = sqrt(i);
		if (k*k == i){
			count++;
			a[count] = i;
		}	
	}
	printf("%d\n", count);
	for(int i=1;i<=count;i++){
		printf("%d\n", a[i]);
	}

	
	return 0;
}