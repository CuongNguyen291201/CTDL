#include<bits/stdc++.h>
using namespace std;

void result(){
	int n; cin>>n; int t1=n, t2=n;
	int a[n];
	for(int i=1;i<=n;i++) cin>>a[i];
	while(a[t1]<a[t1-1] && t1>0) t1--;
	t1--;
	if (t1<0) {
		for(int i=1;i<=n;i++) cout<<i<<" ";
	} else {
		while(a[t2]<a[t1]) t2--;
		swap(a[t2], a[t1]);
		sort(a+t1+1, a+n+1);
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		result();
	}
	
	return 0;
}
