#include<bits/stdc++.h>
using namespace std;

void result(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stack <int> s;
	int b[n];
	for(int i=n-1;i>=0;i--){
		if(!s.empty() && a[i]>=s.top()) s.pop();
		else {
			b[i]= -1;
		}
		s.push(a[i]);
	}
}

int main(){
	int t; cin>>t;
	while(t--) result();
	return 0;
}
