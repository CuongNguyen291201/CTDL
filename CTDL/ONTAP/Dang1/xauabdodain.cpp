#include<bits/stdc++.h>
using namespace std;

int n; int a[10000];

void result(){
	for(int i=1;i<=n;i++){
		if (a[i]==0) cout<<'A';
		else cout<<'B';
	}
	cout<<" ";
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if (i==n) result();
		else Try(i+1);
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}	
	
	return 0;
}