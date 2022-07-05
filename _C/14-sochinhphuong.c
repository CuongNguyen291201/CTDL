#include<stdio.h>
#include<math.h>

int main() {
	int t; scanf("%d", &t);
	while(t--){
		int a; scanf("%d", &a);
		int b = sqrt(a);
		if (b*b==a){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}