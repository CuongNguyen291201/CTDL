#include<bits/stdc++.h>
using namespace std;

void result(){
	int s,d; cin>>s>>d;
	
	if (9*d<s || s<1) {
		cout<<-1<<endl;
		return;
	}
	
	string res;
	
	for(int i=1;i<=9;i++){
		if (s-i<=(d-1)*9) {
			res.push_back(i+'0');
			s-=i; d--;
			break;
		}
	}
	
	for(int i=0;i<=9;i++){
		while (s-i<=(d-1)*9 && s-i>=0){
			res.push_back(i+'0');
			d--;
			s-=i;
		}
	}
	cout<<res<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) result();
	return 0;
}
