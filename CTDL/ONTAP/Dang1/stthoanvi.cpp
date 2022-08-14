#include<bits/stdc++.h>
using namespace std;

int n, a[10000], check[1000]={}, b[10000], c=0;
vector<int> r[10000000];

long long gt(){
	long long sum=1;
	for(int i=1;i<=n;i++) sum*=i;
	return sum;
}

void result(int count){
	c+=count;
	int check=1, k=0;
	for(int i=1;i<=n;i++){
		if (a[i]!=b[i]){
			check=0;
			return;
		} else {
			check=1;
		}
	}
	if (check==1 && c>gt()){
		cout<<1<<endl;
		c=0;
	} else {
		cout<<c<<endl;
		c=0;
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
		for(int i=1;i<=n;i++) cin>>b[i];
		int w=n, q=n, checkF=0, checkA=0;
		int o=1;
		
		while(q>0){
			if (b[q]==q){
				q--;
			} else {
				checkF=1;
				break;
			}
		}
		
		while(w>0){
			if (b[o]==w){
				w--;o++;
			} else {
				checkA=1;
				break;
			}
		}
		
		if (checkA==0) cout<<gt()<<endl;
		else if (checkF==0) cout<<1<<endl;
		else {
			Try(1);	
		}
		
	}	
	
	return 0;
}

