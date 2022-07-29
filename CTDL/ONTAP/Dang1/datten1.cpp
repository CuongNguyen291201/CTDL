#include<bits/stdc++.h>
using namespace std;

int n,k; string a[10000];

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		int l = sizeof(a)/sizeof(a[0]);
		sort(a, a+l);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
	}
	
	return 0;
}
