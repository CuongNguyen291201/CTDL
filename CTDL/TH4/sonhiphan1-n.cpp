#include<bits/stdc++.h>
using namespace std;

void result() {
	int n; cin>>n;
	queue <string> q;
	q.push("1");
	for(int i=1;i<=n;i++){
		string tmp = q.front();
		cout<<tmp<<" ";
		q.pop();
		q.push(tmp+"0");
		q.push(tmp+"1");
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		result();
	}
	return 0;
}