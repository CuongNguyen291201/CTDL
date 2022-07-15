#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

void result(){
  int n; cin>>n;
  int a[n]; long long res=0;
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a, a+n);
  for(int i=0;i<n;i++){
    res = (res + a[i]*i)%mod;
  }
  cout<<res<<endl;
}

int main(){
  int t; cin>>t;
  while(t--) result();
  return 0;
}