#include<bits/stdc++.h>
using namespace std;

void result() {
  int n; cin>>n;
  int a[n+1], t1=0, t2=0;
  
  for(int i=1; i<=n;i++) cin>>a[i];
  for(int i=n;i>1;i--){
    if (a[i]>a[i-1]){
      t1=i-1; t2=1;
      break;
    }
  }

  for(int i=n;i>t1;i++){
    if (a[i]>a[t1]) {
      swap(a[i], a[t1]);
      break;
    }
  }

  sort(a+t1+1, a+n+1);
  if (t2==1) {
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
  } else {
    for(int i=1;i<=n;i++) cout<<i<<" ";
  }
  cout<<endl;
}

int main() {
  int t; cin>>t;
  while(t--) {
    result();
  }
  return 0;
}