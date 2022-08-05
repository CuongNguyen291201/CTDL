#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		long long a[n];
		for(int i=0;i<n;i++){
			scanf("%lld", &a[i]);
		}
		int l=0,r=n-1,check=0;
		while(l<=r){
			if (a[l]!=a[r]) {
				check=1; break;
			}
			l++;r--;
		}
		if (check==1) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}