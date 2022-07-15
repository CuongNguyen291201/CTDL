#include<bits/stdc++.h>
using namespace std;

void result(){
  int n,r=0; cin>>n;
  int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
  for(int i=9;i>=0;i--){
    if (n<=0) break;
    r += n/a[i];
    n%=a[i];
  }
  cout<<r<<endl;
}

int main(){
  int t; cin>>t;
  while(t--){
    result();
  }
  return 0;
}