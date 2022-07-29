#include<bits/stdc++.h>
using namespace std;

bool check(char a, char b){
	if ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']')) return 1;
	return 0;
}

void result(){
	string str; cin>>str;
	stack <char> s;
	int res = 0;
	for(int i=0;i<str.length();i++){
		if (str[i]=='(' || str[i]=='[' || str[i]=='{') s.push(str[i]);
		else {
			if (s.size()!=0){
				char x = s.top(); s.pop();
				if (check(x, str[i])==0) {
					res = 1;
					break;
				}
			}
		}
	}
	if (res==1) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		result();
	}
	return 0;
}
