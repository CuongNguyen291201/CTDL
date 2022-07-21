#include<bits/stdc++.h>
using namespace std;

bool check(char c){
  if (c=='+'||c=='-'||c=='*'||c=='/') return 1;
  return 0;
}

void result(){
  string str; cin>>str;
  stack <string> s;
  for(int i=0;i<str.length();i++){
    if (check(str[i])==0) s.push(string(1, str[i]));
    else {
      string s1 = s.top(); s.pop();
      string s2 = s.top(); s.pop();
      string tmp = '('+s1+str[i]+s2+')';
      s.push(tmp);
    }
  }
  cout<<s.top()<<endl;
}

int main(){
  int t; cin>>t;
  cin.ignore();
  while(t--){
    result();
  }
  return 0;
}