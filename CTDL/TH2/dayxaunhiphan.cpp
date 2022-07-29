#include<bits/stdc++.h>
using namespace std;
long long a[92];

char result(int n, long long k){
  if (n==1) return '0';
  if (n==2) return '1';
  if (k<=a[n-2]) return result(n-2, k);
  return result(n-1, k-a[n-2]);
}

int main(){
  a[0]=0, a[1]=1;
  int t; cin>>t;
  for(int i=2;i<=92;i++) a[i]=a[i-1]+a[i-2];
  while(t--){
    long long k;
    int n; cin>>n>>k;
    cout<<result(n,k)<<endl;
    
  }
  return 0;
}