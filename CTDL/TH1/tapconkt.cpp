#include<bits/stdc++.h>
using namespace std;

int n,k;

void result() {
  int a[k], t=k;
  for(int i=1;i<=k;i++) cin>>a[i];
  while(a[t]==n-k+t && t>0) t--;
  if (t==0) {
    for(int i=1;i<=k;i++) a[i]=i;
  } else {
    a[t]++;
    for(int i=t+1;i<=k;i++) a[i] = a[i-1]+1;
  }
  for(int i=1;i<=k;i++) cout<<a[i]<<" ";
  cout<<endl;
}

int main(){
  int t; cin>>t;
  while(t--){
    cin>>n>>k;
    result();
  }
  return 0;
}