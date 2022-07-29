#include<bits/stdc++.h>
using namespace std;

void result(){
	string str; cin.ignore();
	getline(cin, str);
	stack <char> s;
	for(int i=0;i<str.length();i++){
		if (str[i]!=')') s.push(str[i]);
		else {
			int check=0;
			while(s.size()!=0){
				char x = s.top(); s.pop();
				if (x=='(') break;
				if (x=='+'||x=='-'||x=='*'||x=='/') check=1;
			}
			if (check==0) {
				cout<<"Yes"<<endl; return;
			}
		}
	}
	cout<<"No"<<endl;
}

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--) result();
	return 0;
}
