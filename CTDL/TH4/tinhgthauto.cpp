#include<bits/stdc++.h>
using namespace std;

bool check(char x){
  if (x=='+'||x=='-'||x=='*'||x=='/') return 1;
  return 0;
}

int cal(int a, int b, char x) {
  if (x=='+') return a+b;
  if (x=='-') return a-b;
  if (x=='*') return a*b;
  if (x=='/') return a/b;
}

void result(){
  string str; cin>>str;
  stack <int> s;
  for(int i=0;i<str.length();i++){
    if (check(str[i])==0) s.push(str[i]-'0');
    else {
      int str1=s.top(); s.pop();
      int str2=s.top();s.pop();
      int tmp = cal(str2, str1, str[i]);
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