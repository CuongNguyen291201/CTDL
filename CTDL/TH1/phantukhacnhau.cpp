#include<bits/stdc++.h>
using namespace std;

void result(){
  int n; cin>>n;
  int a[n],b[n-1],check=0,res=0;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n-1;i++) cin>>b[i];

  for(int i=0;i<n-1;i++) {
    if (a[i]!=b[i]) {
      cout<<i+1<<endl;
      break;
    }
  }
}

int main(){
  int t; cin>>t;
  while(t--) result();
  return 0;
}