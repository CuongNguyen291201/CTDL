#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
long long n;
string s;

long long result(long long n, long long k){
  if (k==0) return 1;
  if (k==1) return n;
  long long tmp = result(n,k/2);
  if (k%2==0) return tmp*tmp%mod;
  else return tmp*tmp%mod*n%mod;
}

long long convert(long long n){
  long long sum=0;
  while(n>0) {
    sum+=n%10;
    n/=10;
  }
  return sum;
}

int main(){
  int t; cin>>t;
  while(t--){
    cin>>n;
    cout<<result(convert(n),n)<<endl;
  }
  return 0;
}