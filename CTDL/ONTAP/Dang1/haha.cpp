#include<bits/stdc++.h>
using namespace std;

int n;

void result(string s){
	if (s[0]!='H') return;
	if (s[s.length()-1]!='A') return;
	for(int i=0;i<s.length();i++){
		if (s[i]==s[i+1] && s[i]=='H') return;
	}
	cout<<s<<endl;
}

void Try(string s){
	if (s.length()==n) result(s);
	else {
		Try(s+'A');
		Try(s+'H');
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		Try("");
	}
	return 0;
}
