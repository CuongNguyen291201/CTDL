#include<bits/stdc++.h>
using namespace std;

void result(){
  int n,m,k; cin>>n>>m>>k;
  int a[n+m];
  for(int i=0;i<m+n;i++) cin>>a[i];
  sort(a,a+m+n);
  cout<<a[k-1]<<endl;
}

int main(){
  int t; cin>>t;
  while(t--) result();
  return 0;
}