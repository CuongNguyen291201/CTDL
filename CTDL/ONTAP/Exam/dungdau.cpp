#include<bits/stdc++.h>
using namespace std;

int n; string s;
int check[1000]={};
string a[10], b[10], r[10];


void result(){
	cout<<s<<" ";
	for(int i=0;i<n-1;i++) {
		cout<<r[i]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j=0;j<n-1;j++){
		if (check[j]==0){
			check[j]=1;
			r[i] = b[j];
			if (i==n-2) result();
			else Try(i+1);
			check[j]=0;
		}
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	cin>>s;
	int k=0;
	for(int i=0;i<n;i++) {
		if (a[i]!=s){
			b[k]=a[i];
			k++;
		}
	}
	Try(0);

	return 0;
}
