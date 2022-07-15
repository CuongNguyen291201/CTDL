#include<bits/stdc++.h>
using namespace std;

stack <int> s;
string str; int n;

void printS(){
  if (s.size()==0) cout<<"NONE"<<endl;
  else {
    cout<<s.top()<<endl;
  }
}

int main(){
  int t; cin>>t;
  while(t--){
    cin>>str;
    if (str=="PUSH") {
      cin>>n; s.push(n);
    } else if (str=="POP" && s.size()>0){
      s.pop();
    } else if (str=="PRINT") {
      printS();
    }
  }
  return 0;
}
