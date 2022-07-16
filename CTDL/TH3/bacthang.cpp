#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;
int n,k; 
int result(int n, int k){
  int i,j,a[100005]={0};
  a[0]=1,a[1]=1;
  for(int i=2;i<=n;i++) {
    for(int j=1;j<=min(i,k);j++){
      a[i] = (a[i]+a[i-j])%mod;
    }
  }
  return a[n];
}

int main(){
  int t; cin>>t;
  while(t--){
    cin>>n>>k;
    cout<<result(n, k)<<endl;
  }
  return 0;
}