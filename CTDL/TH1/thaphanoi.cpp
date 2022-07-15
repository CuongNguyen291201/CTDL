#include<bits/stdc++.h>
using namespace std;

void result(int n, char a, char b, char c){
  if (n==1) {
    cout<<a<<" -> "<<c<<endl;
    return;
  }
  result(n-1,a,c,b);
  result(1,a,b,c);
  result(n-1,b,a,c);
}

int main(){
  char a = 'A', b='B',c='C';
  int n; cin>>n;
  result(n,a,b,c);
  return 0;
}