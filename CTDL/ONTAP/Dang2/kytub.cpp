//#include<bits/stdc++.h>
//using namespace std;
//
//string s = "AB";
//long long a[46];
//
//string fibo(int n, long long k){
//	if (n==1) return "A";
//	if (n==2) return "B";
//	if (k<=a[n-2]) return fibo(n-2, k);
//	else fibo(n-1, k-a[n-2]);
//}
//
//int main(){
//	int t; cin>>t;
//	a[0]=0; a[1]=1;
//	long long k;
//	for(int i=2;i<=92;i++) a[i]=a[i-1]+a[i-2];
//	while(t--){
//		int n;
//		cin>>n>>k;
//		s += fibo(n,k);
//		cout<<s<<endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
long long F[50];


long long dem(int n, long long k){
    if(n==0||k==0)
		return 0;
	else if(n==1){
		return 1;
	}
	else{
		if(k> F[n-1]){
			return (dem(n-1, F[n-1]) + dem(n-2, k-F[n-1]));
		}
		else
			return dem(n-1, k);
	}
}

int main(){
	
	F[0]=1;
	F[1]=1;
	for(int i=2;i<46;i++){
		F[i]= F[i-2]+ F[i-1];
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<dem(n, k)<<endl;
	}
	return 0;
}
