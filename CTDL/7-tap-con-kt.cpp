#include<bits/stdc++.h>
using namespace std;

void result() {
	int n,k; cin>>n>>k;
	int a[k+1], t=k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	while(a[t]==n-k+t && t>0) t--;
	if (t==0) {
		for(int i=1;i<=k;i++){
			a[i]=i;
		}
	} else {
		a[t]++;
		for(int i=t+1;i<=k;i++){
			a[i] = a[i-1]+1;
		}
	}
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t; cin>>t;
	while(t--) {
		result();
	}
	return 0;
}
