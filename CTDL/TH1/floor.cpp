#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n,k; cin>>n>>k;
    int a[n], r=-1;
    for(int i=0;i<n;i++) {
      cin>>a[i];
      if (a[i]<=k) r=i+1;
    }
    cout<<r<<endl;
  }
  return 0;
}