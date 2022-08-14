#include<bits/stdc++.h>
#include<array>
using namespace std;

int n; int a[10000], b[1000], check[1000]={}, c=0;

long long gt(){
	long long sum=1;
	for(int i=1;i<=n;i++) sum*=i;
	return sum;
}

std::queue<std::array<int, n>> q; 

void result(){
//	for(int i=i;i<=n;i++){
//		
//	}
	q.push(a);
	
	for(int i=1;i<=s.top().size();i++){
		cout<<q.top()[i]<<" ";
	}
	cout<<endl;
	
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if (check[j]==0){
			a[i]=j;
			check[j]=1;
			if (i==n) {
				result();
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
		gt();
		Try(1);
		
			
	}	
	
	return 0;
}
