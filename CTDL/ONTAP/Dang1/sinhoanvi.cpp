#include<bits/stdc++.h>
using namespace std;

int n; int a[10000], check[1000]={};

void result(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}

void Try(int i){
	for(int j=n;j>0;j--){
		if (check[j]==0){
			a[i]=j;
			check[j]=1;
			if (i==n) result();
			else Try(i+1);
			check[j]=0;
		}
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
