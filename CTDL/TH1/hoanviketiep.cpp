#include<bits/stdc++.h>
using namespace std;

int n;

void result() {
  int a[n], t1=n,t2=n;
  for(int i=1;i<=n;i++) cin>>a[i];

  while(a[t1]<a[t1-1] && t1>0) t1--;
  t1--;
  if (t1<0) {
    for(int i=1;i<=n;i++) cout<<i<<" ";
  } else {
    while(a[t2]<a[t1]) t2--;
    swap(a[t1], a[t2]);
    sort(a+t1+1, a+n+1);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
  }
  cout<<endl;
}

int main() {
  int t; cin>>t;
  while(t--){
    cin>>n;
    result();
  }
  return 0;
}