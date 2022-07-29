#include<bits/stdc++.h>
using namespace std;

void result(){
	int n; cin>>n;
	queue<string> q;
	q.push("6");
	q.push("8");
	vector<string> res;
	while(q.front().length() <= n){
		string tmp = q.front();
		q.pop();
		q.push(tmp+'6');
		q.push(tmp+'8');
		res.push_back(tmp);
	}
	for(int i=res.size()-1;i>=0;i--) cout<<res[i]<<" ";
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) result();
	return 0;
}
