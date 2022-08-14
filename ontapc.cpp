#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

// ucln

//int gcd(int a, int b){
//	if (a==0 || b==0) return a+b;
//	while(a!=b){
//		if (a>b) {
//			a-=b;
//		} else {
//			b-=a;
//		}
//	}
//	return a;
//}
//
//int main(){
//	int t; scanf("%d", &t);
//	while(t--){
//		int a,b; scanf("%d%d", &a, &b);
//		printf("%d\n", gcd(a, b));
//	}
//	return 0;
//}

//int main(){
//	int t; scanf("%d", &t);
//	int sum=0;
//	while(t--){
//		int n; scanf("%d", &n);
//		for(int i=2;i<=sqrt(n);i++){
//			while (n%i==0){
//				n/=i;
//				sum+=i;
//			}
//		}
//		if (n!=1) sum+=n;
//	}
//		printf("%d", sum);
//	return 0;
//}


//int main(){
//	int t; scanf("%d", &t);
//	while(t--){
//		char a[20], b[20], _a[20], _b[20];
//		scanf("%s%s", &a, &b);
//		for(int i=0;i<strlen(a);i++){
//			_a[i]=a[i];
//		}
//		for(int i=0;i<strlen(b);i++){
//			_b[i]=b[i];
//		}
//		for(int i=0;i<strlen(a);i++){
//			if (a[i]=='5') a[i]='6';
//			if (_a[i]=='6') _a[i]='5';
//		}
//		
//		long long sa1=atoll(a);
//		long long sa2=atoll(_a);
//		
//		for(int i=0;i<strlen(b);i++){
//			if (b[i]=='5') b[i]='6';
//			if (_b[i]=='6') _b[i]='5';
//		}
//		
//		long long sb1=atoll(b);
//		long long sb2=atoll(_b);
//		
//		printf("%lld %lld\n", sa2+sb2, sa1+sb1);
//	}
//	return 0;
//}

//int main(){
//	int n,m1=1000,m2=0; scanf("%d", &n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d", &a[i]);
//	}
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if (a[i]>=a[j]) {
//				int tmp = a[i];
//				a[i] = a[j];
//				a[j] = tmp;
//			}
//		}
//	}
//	
//	printf("%d ", a[0]);
//	for(int i=1;i<n;i++) {
//		if (a[i]!=a[0]) {
//			printf("%d", a[i]);
//			break;
//		}
//	}
//	
//	return 0;
//}


//int main(){
//	int t; scanf("%d", &t);
//	while(t--){
//		int n; scanf("%d", &n);
//		int a[n], count=1;
//		for(int i=0;i<n;i++){
//			scanf("%d", &a[i]);
//		}
//		for(int i=1;i<n;i++){
//			int check=0;
//			for(int j=i+1;j<n;j++){
//				if (a[i]<a[j]){
//					check=1; break;
//				}
//			}
//			if (check==0) printf("%d ", a[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int b[400], m=1;
//
//int check(int n){
//	if (n<2) return 0;
//	for(int i=2;i<=sqrt(n);i++){
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//
//void arr(int n){
//	int k=2;
//	while(m<=n*n){
//		if (check(k)==1) {
//			b[m]=k;
//			m++;	
//		}
//		k++;
//	}
//}

int main(){
	int t, k=1, ca[100]={0}; 
//	scanf("%d", &t);
	
	ca[0]=0; ca[1]=1;
	for(int i=2;i<92;i++){
		ca[i]=ca[i-1]+ca[i-2];
	}
//	while(t--){
		int n; scanf("%d", &n);
		
//		arr(n);
		
		int a[n][n];
		int c=0;
		int h1=0,h2=n-1,c1=0,c2=n-1;

//		printf("Test %d:\n", k);k++;

		while(h1<=h2 && c1<=c2){
			for(int i=c1;i<=c2;i++){
				a[h1][i]=c;
				c++;
			}
			h1++;
			for(int i=h1;i<=h2;i++){
				a[i][c2]=c;
				c++;
			}
			c2--;
			for(int i=c2;i>=c1;i--){
				a[h2][i]=c;
				c++;
			}
			h2--;
			for(int i=h2;i>=h1;i--){
				a[i][c1]=c;
				c++;
			}
			c1++;
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ",ca[a[i][j]]);
			}
			printf("\n");
		}	
		
		
//		m=1;
//	}
	
	return 0;
}



