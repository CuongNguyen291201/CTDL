#include<bits/stdc++.h>
using namespace std;

bool check(string x){
	if (x=="+"||x=="-"||x=="*"||x=="/"||x=="^") return 1;
	return 0;
}

long long cal(long long a, long long b, string x){
	if (x=="+") return a+b;
	if (x=="-") return a-b;
	if (x=="*") return (a)*(b);
	if (x=="/") return (a)/(b);
	if (x=="^") {
		if (b<0) {
			long long num = abs(pow((a), abs(b)));
			return -1/num;
		}
		return pow(a, b);
	}
}


void result(){
	int n; cin>>n;
	cin.ignore();
	string str; 
	getline(cin, str);
	
	stringstream ss(str);
	string word;
	vector<string> arr;
	while(ss >> word){
		arr.push_back(word);
	}
	
	stack<long long> s;
	for(int i=0;i<arr.size(); i++) {
		if (check(arr[i])==0) {
			stringstream cs(arr[i]);
			int num=0;
			cs >> num;
			s.push(num);
		}
		else {
			long long str1=s.top(); s.pop();
			long long str2=s.top(); s.pop();
	
			long long tmp=cal(str2, str1, arr[i]);
			s.push(tmp);
		}
	}
	cout<<s.top()<<endl;

}

int main(){
	int t; cin>>t;
	while(t--){
		result();
	}
	return 0;
}
