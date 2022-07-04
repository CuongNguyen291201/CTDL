#include<bits/stdc++.h>
using namespace std;

void check(string s) {
  int n = s.length();
  while (n--) {
    if (s[n] == '1') s[n] = '0';
    else {
      s[n] = '1'; break;
    }
  }
  cout<<s;
}

int main() {
  int t; cin>>t;
  while (t--) {
    string s; cin>>s;
    check(s);
    cout<<endl;
  }
  
  return 0;
}