#include<bits/stdc++.h>
using namespace std;

const int mod = 123456789;

long long result(long long n, long long k){
  if (k==0) return 1;
  if (k==1) return n;
  long long tmp = result(n, k/2);
  if (k%2==0) return tmp*tmp%mod;
  else return tmp*tmp%mod*n%mod;
}

int main(){
  int t; cin>>t;
  while(t--){
    long long n; cin>>n;
    cout<<result(2,n-1)<<endl;
  }
  return 0;
}