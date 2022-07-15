#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		stack<string> s;
		string str;
		while(1){
			cin>>str;
			s.push(str);
			if (getchar()=='\n') break;
		}
		while(s.size()!=0){
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<endl;
	}
	return 0;
}
