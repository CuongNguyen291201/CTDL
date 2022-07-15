#include<bits/stdc++.h>
using namespace std;

void result(){
  int n,k,t1=0,t2=0; cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a, a+n);
  int p = min(k,n-k);

  for(int i=0;i<n;i++) {
    if (i<p) t1 += a[i];
    else t2 += a[i];
  }
  cout<<t2-t1<<endl;
}

int main(){
  int t; cin>>t;
  while(t--){
    result();
  }
  return 0;
}