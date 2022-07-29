#include<bits/stdc++.h>
using namespace std;

void result(string s){
	int l = s.length();
	while(l--){
		if (s[l]=='1') s[l]='0';
		else {
			s[l]='1'; break;
		}
	}
	cout<<s<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		result(s);
	}
	
	return 0;
}
