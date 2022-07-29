#include<bits/stdc++.h>
using namespace std;

void result(){
	int n; cin>>n;
	queue<string> q;
	q.push("4");
	q.push("5");
	while(n--){
		string s1 = q.front(), s2=q.front();
		q.pop();
		q.push(s1+"4");
		q.push(s1+"5");
		reverse(s2.begin(), s2.end());
		cout<<s1<<s2<<" ";
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) result();
	return 0;
}
