#include<bits/stdc++.h>
using namespace std;




// stack - queue

// kiem tra bieu thuc

	//void result(){
	//	string str;
	//	stack<char> s;
	//	cin.ignore();
	//	getline(cin, str);
	//	
	//	for(int i=0;i<str.length();i++){
	//		if (str[i]!=')') s.push(str[i]);
	//		else {
	//			int check=0;
	//			while(s.size()!=0){
	//				char c = s.top();
	//				s.pop();
	//				if (c=='(') break;
	//				if (c=='+'||c=='-'||c=='*'||c=='/') check=1;
	//			}
	//			if (check==0) {
	//				cout<<"Yes"<<endl;
	//				return;
	//			}
	//		}
	//	}
	//	cout<<"No"<<endl;
	//}
	//
	//int main(){
	//	int t; cin>>t;
	//	while(t--) result();
	//	return 0;
	//}

// danh stt dau ngoac

//	void result(){
//		string str;
//		int count=0;
//		stack<int> s;
//		getline(cin, str);
//		
//		for(int i=0;i<str.length();i++){
//			if (str[i]=='('){
//				count+=1;
//				s.push(count);
//				cout<<s.top()<<" ";
//			} 
//			else if (str[i]==')' && s.size()!=0) {
//				cout<<s.top()<<" ";
//				s.pop();
//			}
//		}
//		cout<<endl;
//	}
//	
//	int main(){
//		int t; cin>>t;
//		cin.ignore();
//		while(t--) result();
//		return 0;
//	}

// kiem tra cap dau ngoac

	//int check(char a, char b){
	//	if ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}')) return 1;
	//	return 0;
	//}
	//
	//void result(){
	//	string str;
	//	getline(cin, str);
	//	stack<char> s;
	//	int res = 0;
	//	for(int i=0;i<str.length();i++){
	//		if (str[i]=='(' || str[i]=='{' || str[i]=='[') s.push(str[i]);
	//		else if (s.size()!=0){
	//			char a = s.top();
	//			s.pop();
	//			if (check(a, str[i])==0) {
	//				res=1;
	//				break;
	//			}
	//		}
	//	}
	//	res == 0 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	//}
	//
	//int main(){
	//	int t; cin>>t;
	//	cin.ignore();
	//	while(t--) result();
	//	return 0;
	//}
	
// so may man tiep theo

//int main(){
//	long long a,b;
//	cin>>a>>b;
//	queue<long long> q;
//	
//	q.push(4);
//	q.push(7);
//	long long res=0;
//	for(long long i=a;i<=b;i++){
//		if (i>q.front()){
//			q.push(q.front()*10+4);
//			q.push(q.front()*10+7);
//			q.pop();
//			i--;
//		} else {
//			res+=q.front();	
//			cout<<i<<" "<<q.front()<<" "<<res<<endl;
//		}
//	}
//	cout<<res;
//	return 0;
//}

// hau to - tien to

//bool check(string s){
//	if (s=="+"||s=="-"||s=="*"||s=="/") return 1;
//	return 0;
//}
//
//long long cal(long long a, long long b, string s){
//	if (s=="+") return a+b;
//	if (s=="-") return a-b;
//	if (s=="*") return a*b;
//	if (s=="/") return a/b;
//}
//
//void result(){
//	int n; cin>>n;
//	cin.ignore();
//	
//	string str;
//	getline(cin, str);
//	
//	stringstream ss(str);
//	string word;
//	vector<string> a;
//
//	while(ss >> word){
//		a.push_back(word);
//	}
//	
//	stack<long long> s;
//	for(int i=a.size()-1;i>=0;i--){
//		if (check(a[i])==0) {
//			stringstream ssn(a[i]);
//			long long num=0;
//			ssn >> num;
//			s.push(num);
//		} else {
//			long long s1 = s.top(); s.pop();
//			long long s2 = s.top(); s.pop();
//			s.push(cal(s1, s2, a[i]));
//		}
//	}
//	
//	cout<<s.top()<<endl;
//}
//
//int main(){
//	int t; cin>>t;
//	while(t--){
//		result();
//	}
//	return 0;
//}

//int n;
//int a[18];
//
//void result(){
//	if (a[1]!=1 || a[n]!=0) return;
//	for(int i=1;i<=n;i++){
//		if (a[i]==a[i+1] && a[i]==1) return;
//	}
//	for(int i=1;i<=n-3;i++){
//		if (a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==0) return;
//	}
//	for(int i=1;i<=n;i++){
//		if (a[i]==1) cout<<8;
//		else cout<<6;
//	}
//	cout<<endl;
//}
//
//void Try(int i){
//	for(int j=0;j<=1;j++){
//		a[i]=j;
//		if (i==n) result();
//		else Try(i+1);
//	}
//}
//
//int main(){
//	cin>>n;
//	Try(1);
//	return 0;
//}

// so thu tu to hop

//int n,k;
//int a[100], b[100];
//int c=1;
//int check=0;
//vector<int*> r;
//
//void result(){
//	int ck=0;
//	for(int i=1;i<=k;i++){
//		if (a[i]!=b[i]) {
//			ck=1; break;
//		}
//	}
//
//	if (ck==0) {
//		check=1;
//		cout<<c<<endl;
//	}
//	c++;
//}
//
//
//void Try(int i){
//	for(int j=a[i-1]+1;j<=n-k+i;j++){
//		a[i]=j;
//		if (i==k) result();
//		else Try(i+1);
//	}
//}
//
//int main(){
//	int t; cin>>t;
//	while(t--) {
//		cin>>n>>k;
//		for(int i=1;i<=k;i++) cin>>b[i];
//		
//		if (check==0) {
//			Try(1);	
//		}
//		
//		check=0;
//		c=1;
//		
//	}
//	return 0;
//}


// so thu tu hoan vi

//int n;
//int a[100], b[100], checka[1000]={0};
//int c=1, check=0;
//
//void result(){
//	int ck=0;
//	for(int i=1;i<=n;i++){
//		if (a[i]!=b[i]){
//			ck=1;
//			break;
//		}
//	}
//	if (ck==0){
//		check=1;
//		cout<<c<<endl;
//	}
//	c++;
//}
//
//void Try(int i){
//	for(int j=1;j<=n;j++){
//		if (checka[j]==0){
//			a[i]=j;
//			checka[j]=1;
//			if (i==n) result();
//			else Try(i+1);
//			checka[j]=0;
//		}
//	}
//}
//
//int main(){
//	int t; cin>>t;
//	while(t--){
//		cin>>n;
//		for(int i=1;i<=n;i++) cin>>b[i];
//		if (check==0){
//			Try(1);
//		}
//		
//		c=1;
//		check=0;
//	}
//	return 0;
//}

// dung dau

//int n, k=0;
//string a[16], b[16];
//string str; 
//string r[14];
//int check[10000]={0};
//
//void result(){
//	cout<<str<<" ";
//	for(int i=1;i<=k;i++){
//		cout<<r[i]<<" ";
//	}
//	cout<<endl;
//}
//
//void Try(int i){
//	for(int j=1;j<=k;j++){
//		if (check[j]==0){
//			r[i]=b[j-1];
//			check[j]=1;
//			if (i==k) result();
//			else Try(i+1);
//			check[j]=0;
//		}
//	}
//}
//
//int main(){
//	cin>>n;
//	for(int i=0;i<n;i++) cin>>a[i];
//	cin>>str;
//	sort(a, a+n);
//	for(int i=0;i<n;i++){
//		if (a[i]!=str){
//			b[k]=a[i];
//			k++;
//		}
//	}
//	Try(1);
//	
//	return 0;	
//}

// to hop nguoc

//int n,k;
//int a[22];
//
//void result(){
//	for(int i=1;i<=k;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//}
//
//void Try(int i){
//	for(int j=n-k+i;j>=a[i-1]+1;j--){
//		a[i]=j;
//		if (i==k) result();
//		else Try(i+1);
//	}
//}
//
//int main(){
//	int t; cin>>t;
//	while(t--) {
//		cin>>n>>k;
//		Try(1);
//	}
//	return 0;
//}


// cai tui



