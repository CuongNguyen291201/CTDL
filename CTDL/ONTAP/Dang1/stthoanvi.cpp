#include<bits/stdc++.h>
using namespace std;

int n, a[10000], check[1000]={}, b[10000], c=0;
vector <int> r[1000];

void result(int count){
	c+=count;
	for(int i=1;i<=n;i++) r[c].push_back(a[i]);
}

void pr(){
	int check=1;
	for(int i=1;i<=c;i++){
		for(int j=0;j<n;j++){
			if (r[i][j] != b[j]) {
				check=0;
				break;
			} else {
				check=1;
			}
		}
		if (check==1) {		
			cout<<i<<endl;
			break;
		}
	}
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if (check[j]==0){
			a[i]=j;
			check[j]=1;
			if (i==n) {
				result(1);
			}
			else Try(i+1);
			check[j]=0;
		}
	}
}


int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>b[i];
		Try(1);
		pr();
	}	
	
	return 0;
}
