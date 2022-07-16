#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
long long res(int n, long long k){
  if (k==0) return 1;
  long long tmp = res(n, k/2);
  if (k%2==0) return tmp*tmp%mod;
  return n*(tmp*tmp%mod)%mod;
}

int main(){
  int n; long long k;
  while(1){
    cin>>n>>k;
    if (n==0 && k==0) break;
    cout<<res(n,k)<<endl;
  }
  return 0;
}