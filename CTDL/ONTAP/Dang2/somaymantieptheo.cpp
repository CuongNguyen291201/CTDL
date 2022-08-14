#include<bits/stdc++.h>
using namespace std;

int a, b;

void result(){
	cin>>a>>b;
	queue<long long> q;
	q.push(4);
	q.push(7);
	
	for(int i=a;i<=b;i++){
		if (i > q.front()) {
			int k = q.front();
			q.pop();
			q.push(k*10+4);
			q.push(k*10+7);
		} else {
			cout<<q.front();
			break;
		}
	}
}

int main(){
	result();
	return 0;
}
