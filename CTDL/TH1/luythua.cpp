#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
long long n,k;
long long result(int n, int k){
  if (k==0) return 1;
  if (k==1) return n%mod;
  long long tmp = result(n, k/2);
  if (k%2==0) return tmp*tmp%mod;
  else return tmp*tmp%mod*n%mod;
}

int main(){
  int t; cin>>t;
  while(t--){
    cin>>n>>k;
    cout<<result(n, k)<<endl;
  }
  return 0;
}