#include<bits/stdc++.h>
using namespace std;

void result() {
  string s; cin>>s;
  int n=s.size();
  while(n--){
    if (s[n]=='1'){
      s[n] = '0';
      break;
    } else {
      s[n] = '1';
    }
  }
  cout<<s;
}

int main() {
  int t; cin>>t;
  while(t--){
    result();
    cout<<endl;
  }
  return 0;
}