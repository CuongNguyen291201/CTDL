#include<bits/stdc++.h>
using namespace std;

long long a[92];
int mod = 1e9+7;

int main() {
  a[0]=0, a[1]=1;
  for(int i=2;i<=92;i++) a[i]=a[i-1]+a[i-2];
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    cout<<a[n]%mod<<endl;
  }
  return 0;
}

