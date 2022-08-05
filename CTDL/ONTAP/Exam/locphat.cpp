#include<bits/stdc++.h>
using namespace std;

int n, a[16];

void result(){
	if (a[1]!=1 || a[n]!=0) return;
	for(int i=1;i<=n-3;i++){
		if (a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==0) return;
	}
	
	for(int i=1;i<=n;i++) {
		if (a[i]==a[i+1] && a[i]==1) return;
	}
	
	for(int i=1;i<=n;i++){
		if (a[i]==1) cout<<8;
		else cout<<6;
	}
	cout<<endl;
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if (i==n) result();
		else Try(i+1);
	}
} 

int main(){
	cin>>n;
	Try(1);
	return 0;
}