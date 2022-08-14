#include<bits/stdc++.h>
using namespace std;

void result(){
	string str;
	getline(cin, str);
	stack<int> s;
	int count=0;
	int m;
	
	for(int i=0;i<str.length();i++){
		if (str[i]=='('){
			count = count+1;
			s.push(count);
			cout<<s.top()<<" ";
		} else if (str[i]==')' && s.size()!=0){
			cout<<s.top()<<" ";
			s.pop();
		}
	}
}

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		result();
		cout<<endl;
	}
	return 0;
}
