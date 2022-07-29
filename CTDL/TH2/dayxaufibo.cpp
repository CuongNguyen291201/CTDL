#include<bits/stdc++.h>
using namespace std;
long long a[92];

char fibo(int n, long long k){
  if (n==1) return 'A';
  if (n==2) return 'B';
  if (k<=a[n-2]) return fibo(n-2, k);
  return fibo(n-1, k-a[n-2]);
}

int main() {
  int t; cin>>t;
  long long k;
  a[0]=0; a[1]=1;
  for(int i=2;i<=92;i++) a[i]=a[i-1]+a[i-2];
  while(t--){
    int n; cin>>n>>k;
    cout<<fibo(n, k)<<endl;
  }
  return 0;
}