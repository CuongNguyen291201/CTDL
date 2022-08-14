#include<bits/stdc++.h>
using namespace std;

int n,k,m=1;
int a[10000], b[10000], r[10000];
stack<int> newA;

void result(){
	for(int i=1;i<=k;i++){
		cout<<b[r[i]-1]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j=r[i-1]+1;j<=m-k+i;j++){
		r[i]=j;
		if (i==k) result();
		else Try(i+1);
	}
}

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	newA.push(a[0]);
	b[0]=a[0];
	
	for(int i=1;i<n;i++){
		if (newA.size()!=0 && newA.top()!=a[i]) {
			newA.push(a[i]);
			b[m]=a[i];
			m++;
		}
	}
	
	Try(1);
	return 0;
}
