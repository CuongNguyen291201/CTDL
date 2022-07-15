#include<stdio.h>
#include<math.h>

int sotn(int n){
	int sum = 0;
	int check = 0;
	while(n>0) {
		int k = n%10;
		if (k%2==0) return 0;
		sum += n%10;
		n/=10;
	}
	return sum % 3 
}



int main() {
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		if (n%2==0) printf("NO\n");
		else {
			if ()
		}
	}
	return 0;
}