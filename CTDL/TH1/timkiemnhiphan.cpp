#include<bits/stdc++.h>
using namespace std;

void result(){
  int n,k; cin>>n>>k;
  int a[n+1], check=0;
  for(int i=1;i<=n;i++) cin>>a[i];
  int l=1,r=n;
  while(l<=r){
    if (k==a[l] || k==a[r]){
      if (k==a[l]) {
        cout<<l<<endl;
        check=1; break;
      }
      if (k==a[r]) {
        cout<<r<<endl;
        check=1; break;
      }
    }
    l++;r--;
  }
  if (check==0) cout<<"NO"<<endl;
}

int main(){
  int t; cin>>t;
  while(t--){
    result();
  }
  return 0;
}