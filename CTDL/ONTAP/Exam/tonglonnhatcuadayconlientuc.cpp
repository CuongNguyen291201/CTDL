#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000000];

int findMax(stack<int> s){
	int m=s.top();
	int a;
	while(!s.empty()){
		a=s.top();
		if (m<a) m=a;
		s.pop();
	}
	return m;
}

void result(){
	stack<int> st;
	
	
	int s=0,e=0;
	
	int max=0;
	
	for(int i=s;i<n;i++){
		st.push(a[i]);
		stack<int> b;
		b=st;
		cout<<findMax(b)<<endl;
//		if (i==n-1){
//			s++;
//			st = stack<int>();
//		}
	}
//	cout<<max<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) {
		for(int i=0;i<n;i++) cin>>a[i];
		result();
	}
	return 0;
}
