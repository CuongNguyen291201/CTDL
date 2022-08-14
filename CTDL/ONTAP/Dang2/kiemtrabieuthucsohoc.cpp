#include<bits/stdc++.h>
using namespace std;

void result() {
	string str; cin.ignore();
	getline(cin, str);
	stack<char> s;
	for(int i=0;i<str.length();i++){
		if (str[i]!=')') s.push(str[i]);
		else {
			int check=0;
			while(s.size()!=0){
				char c=s.top(); s.pop();
				if (c=='(') break;
				if (c=='+'||c=='-'||c=='*'||c=='/') check=1;
			}
			if (check==0) {
				cout<<"Yes"<<endl;
				return;
			}
		}
	}
	cout<<"No"<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) result();
	return 0;
}
